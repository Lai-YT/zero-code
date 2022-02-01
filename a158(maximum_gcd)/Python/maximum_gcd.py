from itertools import combinations
from math import gcd
from sys import stdin, stdout


_ = int(stdin.readline().strip())

for line in stdin:
    nums = list(map(int, line.split()))
    max_gcd_pair = max(combinations(nums, 2), key=lambda p: gcd(*p))
    stdout.write(f'{gcd(*max_gcd_pair)}\n')
