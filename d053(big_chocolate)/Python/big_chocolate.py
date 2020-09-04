from sys import stdin, stdout

while True:
    line = stdin.readline()
    if not line: break
    n, m = map(int, line.split())
    stdout.write(f'{(n - 1) + n * (m - 1)}\n')
