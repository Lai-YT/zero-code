from sys import stdin, stdout
from math import gcd
alphabet = ['0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', \
            'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
def func(n: int, ceil: int) -> int:
    if n > ceil: return 0
    h = ceil // n
    return ((n * h + n) * h) // 2
while True:
    line = stdin.readline()
    if not line: break
    a, b, c = map(int, line.split())
    n = func(a, c) + func(b, c) - func(a * b // gcd(a, b), c)
    if n > 26: n %= 26
    stdout.write(alphabet[n] + '\n')
