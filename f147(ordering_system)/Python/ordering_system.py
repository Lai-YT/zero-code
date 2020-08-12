
from sys import stdin

class Meal():
    def __init__(self, name, price):
        self.name = name
        self.price = price

    def __str__(self):
        return f'{self.name} {self.price}'

set = {1: Meal('Medium Wac', 4), 2: Meal('WChicken Nugget', 8), 3: Meal('Geez Burger', 7), 4: Meal('ButtMilk Crispy Chicken', 6), 5: Meal('Plastic Toy', 3)}
single = {1: Meal('German Fries', 2), 2: Meal('Durian Slices', 3), 3: Meal('WcFurry', 5), 4: Meal('Chocolate Sunday', 7)}


while True:
    command = stdin.readline().strip()
    if not command: break
    total = 0
    while command != '0':
        if command == '1':
            meal = set[int(stdin.readline())]
            print(meal)
            total += meal.price
        elif command == '2':
            meal = single[int(stdin.readline())]
            print(meal)
            total += meal.price
        command = stdin.readline().strip()
    else: print('Total:', total)
