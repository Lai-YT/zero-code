from sys import stdin, stdout

while True:
    line = stdin.readline()
    if not line: break
    h, w = map(int, line.split())
    stdout.write(f'{(h + w) * 2}\n')
