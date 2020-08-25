from sys import stdin
while True:
    line = stdin.readline()
    if not line: break
    low, up = map(int, line.split())
    if low > up: low, up = up, low
    low += low % 2
    up -= up % 2
    print((low + up) * ((up - low) // 2 + 1) // 2)
