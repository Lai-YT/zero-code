from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    pa, pb, pc = map(float, line.split())
    stdout.write(f'{(pa ** 2 + pc ** 2 - pb ** 2) ** 0.5:.2f}\n')
