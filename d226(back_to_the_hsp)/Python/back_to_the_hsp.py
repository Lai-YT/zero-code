from sys import stdin, stdout

while True:
    line = stdin.readline()
    if not line: break
    v, t = map(int, line.split())
    stdout.write(f'{2 * v * t}\n')
