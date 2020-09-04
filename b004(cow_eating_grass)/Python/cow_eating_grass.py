from sys import stdin
from math import pi

while True:
    line = stdin.readline()
    if not line: break
    distance, length = map(float, line.split())
    a = length / 2
    b = ((length / 2) ** 2 - (distance / 2) ** 2) ** 0.5
    print(f'{pi * a * b:.3f}')
