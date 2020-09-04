from sys import stdin

while True:
    length = stdin.readline()
    if not length: break
    length = int(length)
    print((length >> 2) * ((length >> 1) - (length >> 2)))
