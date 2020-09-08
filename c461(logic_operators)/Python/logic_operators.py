from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    a, b, r = map(lambda x: bool(int(x)), line.split())
    p = True
    if (a & b) == r:
        p = False
        stdout.write('AND\n')
    if (a | b) == r:
        p = False
        stdout.write('OR\n')
    if (a ^ b) == r:
        p = False
        stdout.write('XOR\n')
    if p:
        stdout.write('IMPOSSIBLE\n')
