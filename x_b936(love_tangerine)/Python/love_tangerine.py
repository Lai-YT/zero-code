from sys import stdin, stdout

def split(n, m):
    if n >> 1 <= m:
        return 1
    if n % 2:
        return split((n + 1) >> 1, m) + split((n - 1) >> 1, m)
    return split(n >> 1, m) << 1

while True:
    line = stdin.readline()
    if not line: break
    total, unless = map(int, line.split())
    if total < unless:
        stdout.write('0\n')
    else: stdout.write(f'{split(total, unless)}\n')
