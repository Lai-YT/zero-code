from sys import stdin
while True:
    line = stdin.readline()
    if not line: break
    low, up = map(int, line.split())
    low += low % 2
    up -= up % 2
    print((up - low) // 2 + 1)
