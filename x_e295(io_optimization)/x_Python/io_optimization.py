from sys import stdin

while True:
    try:
        a, b = stdin.readline().split()
        print(int(a) + int(b))
    except:
        break
