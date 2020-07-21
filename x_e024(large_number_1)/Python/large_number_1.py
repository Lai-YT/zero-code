from sys import stdin

while True:
    try:
        line = stdin.readline()
        if not line: break
        a, b = map(int, line.split())
        if a == 0 and b == 0: break
        print(a ** b)
    except:
        break
