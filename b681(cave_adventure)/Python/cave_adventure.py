from sys import stdin, stdout

day = 0
while True:
    pos = stdin.readline()
    if not pos: break
    pos = int(pos)
    day = pos * (-2) if pos < 0 else pos * 2 - 1
    stdout.write(f'{day}\n')
