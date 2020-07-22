
class Coordinate():
    def __init__(self, x = 0, y = 0):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Coordinate(self.x + other.x, self.y + other.y)

    def __sub__(self, other):
        return Coordinate(self.x - other.x, self.y - other.y)

    def __iadd__(self, other):
        self.x += other.x
        self.y += other.y
        return self

    def __isub__(self, other):
        self.x -= other.x
        self.y -= other.y
        return self

    def __str__(self):
        return f'({self.x},{self.y})'

class Item():
    def __init__(self, name):
        self.name = name

    def copy(self):
        return Item(self.name)

class Food(Item):
    def __init__(self, name, sat):
        super().__init__(name)
        self.sat = sat

    def copy(self):
        return Food(self.name, self.sat)

class Material(Item):
    def __init__(self, name):
        super().__init__(name)

    def copy(self):
        return Material(self.name)

class Player():
    __walk_step_record = 0
    __run_step_record = 0
    __respawn_position = Coordinate(0, 0)

    def __init__(self, *, hp = 10, sat = 10, position = Coordinate(0, 0), backpack = {}):
        self.hp = hp
        self.sat = sat
        self.position = position
        self.backpack = backpack

    def walk(self, direction, step):
        self.__walk_step_record += step
        self.sat -= self.__walk_step_record // 50
        self.__walk_step_record %= 50
        if self.sat > 0:
            if direction == 'North': self.position.y += step
            elif direction == 'East': self.position.x += step
            elif direction == 'South': self.position.y -= step
            else: self.position.x -= step

    def run(self, direction, step):
        self.__run_step_record += step
        self.sat -= self.__run_step_record // 25
        self.__run_step_record %= 25
        if self.sat > 0:
            if direction == 'North': self.position.y += step
            elif direction == 'East': self.position.x += step
            elif direction == 'South': self.position.y -= step
            else: self.position.x -= step

    def pick(self, item, amount):
        if item in self.backpack:
            self.backpack[item] += amount
        else:
            self.backpack[item] = amount

    def eat(self, food_name, amount):
        for food in [f for f in self.backpack if f.name == food_name]:
            self.backpack[food] -= amount
            self.sat += food.sat * amount

        if self.sat > 10:
            self.hp += (self.sat % 10) // 2
            self.sat = 10
            self.hp %= 10

    def sleep(self):
        self.__respawn_position = self.position

    def die(self):
        self.hp = 0
        self.sat = 0
        self.__walk_step_record = 0
        self.__run_step_record = 0
        self.backpack.clear()

    def respawn(self):
        self.hp = 10
        self.sat = 10
        self.position = self.__respawn_position

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

from sys import stdin
player = Player()
monsters = []
drop_list = {}
while True:
    try:
        line = stdin.readline()
        if not line: break
        instruction = list(line.split())
        movement = instruction[0]
        if movement == 'Walk':
            player.walk(instruction[1], step = int(instruction[2]))
            if str(player.position) in drop_list:
                for item, amount in drop_list[str(player.position)].items():
                    player.pick(item.copy(), amount)
                del drop_list[str(player.position)]
        elif movement == 'Run':
            player.run(instruction[1], step = int(instruction[2]))
            if str(player.position) in drop_list:
                for item, amount in drop_list[str(player.position)].items():
                    player.pick(item.copy(), amount)
                del drop_list[str(player.position)]
        elif movement == 'Sleep':
            player.sleep()
        elif movement == 'Create':
            monsters.append(Monster(instruction[1], atk = int(instruction[2])))
        elif movement == 'Attacked':
            for monster in monsters:
                if monster.name == instruction[2]:
                    player.hp -= monster.atk
        elif movement == 'Pick':
            if len(instruction) == 3 and instruction[1] not in [x.name for x in player.backpack]:
                player.pick(Material(instruction[1]), amount = int(instruction[2]))
            elif len(instruction) == 4:
                player.pick(Food(instruction[1], sat = int(instruction[3])), amount = int(instruction[2]))
            else:
                for item in player.backpack:
                    if item.name == instruction[1]:
                        player.pick(item, amount = int(instruction[2]))
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
        if player.hp <= 0 or player.sat <= 0:
            if player.backpack:
                drop_list[str(player.position)] = player.backpack.copy()
            player.die()
            player.respawn()
            if str(player.position) in drop_list:
                for item, amount in drop_list[str(player.position)].items():
                    player.pick(item.copy(), amount)
                del drop_list[str(player.position)]
    except:
        break
