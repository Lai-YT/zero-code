
from sys import stdin

while True:
    line = stdin.readline()
    if not line:
        break
    a, b, c = map(int, line.split())
    delta = (a + b + c) / 2
    price = (delta * (delta - a) * (delta - b) * (delta - c))
    print(int(price))
