from sys import stdin
while True:
    x1, y1, x2, y2 = map(int, stdin.readline().split())
    if 0 == x1 == y1 == x2 == y2: break
    step = 0
    if x1 == x2 and y1 == y2: pass
    elif x1 == x2 or y1 == y2 or abs((y2 - y1) / (x2 - x1)) == 1: step = 1
    else: step = 2
    print(step)
