
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

class Food(Item):
    def __init__(self, name, sat):
        super().__init__(name)
        self.sat = sat

class Material(Item):
    def __init__(self, name):
        super().__init__(name)

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
        if direction == 'North': self.position.y += step
        elif direction == 'East': self.position.x += step
        elif direction == 'South': self.position.y -= step
        else: self.position.x -= step
        self.__walk_step_record += step
        self.sat -= self.__walk_step_record // 50
        self.__walk_step_record %= 50

    def run(self, direction, step):
        if direction == 'North': self.position.y += step
        elif direction == 'East': self.position.x += step
        elif direction == 'South': self.position.y -= step
        else: self.position.x -= step
        self.__run_step_record += step
        self.sat -= self.__run_step_record // 25
        self.__run_step_record %= 25

    def pick(self, item, amount):
        if item in self.backpack:
            self.backpack[item] += amount
        else:
            self.backpack[item] = amount

    def eat(self, food, amount):
        self.backpack[food] -= amount
        self.sat += food.sat * amount

    def sleep(self):
        self.__respawn_position = self.position

    def die(self):
        self.hp = 0
        self.sat = 0
        self.backpack.clear()

    def respawn(self):
        self.hp = 10
        self.sat = 10
        self.position = self.__respawn_position
        self.__walk_step_record = 0
        self.__run_step_record = 0

    def print_hp(self):
        print(f'HP:{self.hp}')

    def print_sat(self):
        print(f'SAT:{self.sat}')

    def print_position(self):
        print(f'AT:{self.position}')

    def print_backpack(self):
        print('Backpack:')
        for item, amount in self.backpack.items():
            print(f'{item.name} {amount}')
