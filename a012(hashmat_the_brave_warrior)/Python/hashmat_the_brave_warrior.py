from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    a, b = map(int, line.split())
    stdout.write(f'{a - b if a > b else b - a}\n')
