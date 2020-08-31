from sys import stdin, stdout

def min(a: int, b: int) -> int:
    return a if a < b else b

def get_nth_ugly_number(n):
    ugly_numbers = [1]
    i2 = i3 = i5 = 0
    next_2, next_3, next_5 = 2, 3, 5
    next_ugly = 1
    for i in range(1, n):
        next_ugly = min(min(next_2, next_3), next_5)
        ugly_numbers += [next_ugly]
        if next_ugly == next_2:
            i2 += 1
            next_2 = ugly_numbers[i2] * 2
        if next_ugly == next_3:
            i3 += 1
            next_3 = ugly_numbers[i3] * 3
        if next_ugly == next_5:
            i5 += 1
            next_5 = ugly_numbers[i5] * 5
    return next_ugly

while True:
    quest = stdin.readline()
    if not quest: break
    for q in range(int(quest)):
        stdout.write(str(get_nth_ugly_number(int(stdin.readline()))) + '\n')
