from sys import stdin
from math import log, ceil
while True:
    line = stdin.readline().strip('\n')
    if not line: break
    total, remove = map(int, line.split())
    if remove < total / 2: remove = total - remove
    if remove == total:
        print(1)
        continue
    digits = 0
    for n in range(remove + 1, total + 1):
        digits += log(n, 10)
    for n in range(1, total - remove + 1):
        digits -= log(n, 10)
    print(ceil(digits))
