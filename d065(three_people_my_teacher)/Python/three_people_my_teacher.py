from sys import stdin, stdout

while True:
    line = stdin.readline()
    if not line: break
    a, b, c = map(int, line.split())
    stdout.write(f'{max(a, b, c)}\n')
