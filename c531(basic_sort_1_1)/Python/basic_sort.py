from sys import stdin
from typing import List


for line in stdin:
    numbers: List[int] = list(map(int, line.split(',')))
    evens = iter(sorted(n for n in numbers if not n % 2))
    numbers = [(next(evens) if not n % 2 else n) for n in numbers]

    print(*numbers, sep=',')
