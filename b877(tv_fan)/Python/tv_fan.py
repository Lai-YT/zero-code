from sys import stdin, stdout
while True:
    line = stdin.readline().strip('\n')
    if not line: break
    curr, dest = map(int, line.split())
    stdout.write(f'{dest - curr if dest >= curr else 100 - curr + dest}\n')
