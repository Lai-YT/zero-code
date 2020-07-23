
''' In Python, when a = b, a works like a pointer instead of copying the value of b.
    So b.copy() appears frequently to avoid unexpected changes '''

class Coordinate():
    def __init__(self, x = 0, y = 0):
        self.x = x
        self.y = y

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return self.x == other.x and self.y == other.y

    def __hash__(self):
        return hash((self.x, self.y))

    def copy(self):
        return Coordinate(self.x, self.y)

    def __str__(self):
        return f'({self.x},{self.y})'

class Food():
    def __init__(self, name, sat):
        self.name = name
        self.sat = sat

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return self.name == other.name and self.sat == other.sat

    def __hash__(self):
        return hash((self.name, self.sat))

    def copy(self):
        return Food(self.name, self.sat)

class Material():
    def __init__(self, name):
        self.name = name

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return self.name == other.name

    def __hash__(self):
        return hash(self.name)

    def copy(self):
        return Material(self.name)

class Player():
    def __init__(self, *, hp = 10, sat = 10, position = Coordinate(0, 0), backpack = None):
        # backpack is a dict, {Food/Material: amount}
        self.hp = hp
        self.sat = sat
        self.position = position
        if not backpack:
            backpack = {}
        self.backpack = backpack
        self.__walk_step_record = 0
        self.__run_step_record = 0

    def walk(self, direction, step):
        # sat - 1 after 50 steps
        self.__walk_step_record += step
        self.sat -= self.__walk_step_record // 50
        self.__walk_step_record %= 50
        # die first if not enough sat, so no move
        if self.sat > 0:
            if direction == 'North': self.position.y += step
            elif direction == 'East': self.position.x += step
            elif direction == 'South': self.position.y -= step
            else: self.position.x -= step

    def run(self, direction, step):
        # sat - 1 every 25 steps
        self.__run_step_record += step
        self.sat -= self.__run_step_record // 25
        self.__run_step_record %= 25
        # die first if not enough sat, so no move
        if self.sat > 0:
            if direction == 'North': self.position.y += step
            elif direction == 'East': self.position.x += step
            elif direction == 'South': self.position.y -= step
            else: self.position.x -= step

    def pick(self, item, amount):
        # use copy() to avoid deletion
        if item in self.backpack:
            self.backpack[item.copy()] += amount
        else: self.backpack[item.copy()] = amount

    def eat(self, food_name, amount):
        for food in [f for f in self.backpack if f.name == food_name]:
            self.backpack[food] -= amount
            self.sat += food.sat * amount
            # remove food from backpack when amount = 0
            if self.backpack[food] == 0:
                del self.backpack[food]
            break
        # every 2 sat after 10 becomes 1 hp
        if self.sat > 10:
            self.hp += (self.sat - 10) // 2
            self.sat = 10
            if self.hp > 10: self.hp = 10

    def die(self):
        self.hp = 0
        self.sat = 0
        self.backpack.clear()

    def respawn(self, *, hp = 10, sat = 10, position):
        # records don't have to set to zero
        self.hp = hp
        self.sat = sat
        self.position = position

    def print_hp(self):
        print(f'HP:{self.hp}')

    def print_sat(self):
        print(f'SAT:{self.sat}')

    def print_position(self):
        print(f'At:{self.position}')

    def print_backpack(self):
        print('Backpack:')
        for item, amount in self.backpack.items():
            print(f'{item.name} {amount}')

class Monster():
    def __init__(self, name, atk):
        self.name = name
        self.atk = atk

    def __eq__(self, other):
        return self.name == other.name and self.atk == other.atk

    def __hash__(self):
        return hash((self.name, self.atk))

    def copy(self):
        return Monster(self.name, self.atk)



from sys import stdin
player = Player()
monsters = []
drop_list = {} # {Coordinate: backpack}
food_list = {} # {Food_name: sat}
respawn_position = Coordinate(0, 0)
while True:
    line = stdin.readline().strip('\n')
    if not line: break
    instruction = list(line.split())
    movement = instruction[0]
    if movement == 'Walk':
        player.walk(instruction[1], step = int(instruction[2]))
        # pick if arrive at the position where Food/Material had been dropped
        if player.position in drop_list:
            for item, amount in drop_list[player.position].items():
                player.pick(item, amount)
            # delete because were picked
            del drop_list[player.position]
    elif movement == 'Run':
        player.run(instruction[1], step = int(instruction[2]))
        # pick if arrive at the position where Food/Material had been dropped
        if player.position in drop_list:
            for item, amount in drop_list[player.position].items():
                player.pick(item, amount)
            # delete because were picked
            del drop_list[player.position]
    elif movement == 'Sleep':
        # copy() avoid changing
        respawn_position = player.position.copy()
    elif movement == 'Create':
        monsters.append(Monster(instruction[1], atk = int(instruction[2])))
    elif movement == 'Attacked':
        for monster in monsters:
            if monster.name == instruction[2]:
                player.hp -= monster.atk
                break
    elif movement == 'Pick':
        # picked before
        if len(instruction) == 3 and instruction[1] in [x.name for x in player.backpack]:
            for item in [i for i in player.backpack if i.name == instruction[1]]:
                player.pick(item, amount = int(instruction[2]))
                break
        # check if the food has appeared already
        elif len(instruction) == 3 and instruction[1] in food_list:
            player.pick(Food(instruction[1], sat = food_list[instruction[1]]), amount = int(instruction[2]))
        # Food haven't picked
        elif len(instruction) == 4:
            player.pick(Food(instruction[1], sat = int(instruction[3])), amount = int(instruction[2]))
            food_list[instruction[1]] = int(instruction[3])
        # Material haven't picked
        else:
            player.pick(Material(instruction[1]), amount = int(instruction[2]))
    elif movement == 'Eat':
        player.eat(instruction[1], amount = int(instruction[2]))
    elif instruction[1] == 'HP':
        player.print_hp()
    elif instruction[1] == 'SAT':
        player.print_sat()
    elif instruction[1] == 'At':
        player.print_position()
    elif instruction[1] == 'Backpack':
        player.print_backpack()
    else: break
    # if died
    if player.hp <= 0 or player.sat <= 0:
        # drop backpack at current position
        if player.backpack:
            # use copy() because player's backpack will be cleared in die()
            drop_list[player.position] = player.backpack.copy()
        player.die()
        player.respawn(position = respawn_position)
        # might have Food/Material at the respawn position
        if player.position in drop_list:
            for item, amount in drop_list[player.position].items():
                player.pick(item, amount)
            del drop_list[player.position]
