from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    n, m = map(int, line.split())
    for case in range(n):
        number_1 = set(map(int, stdin.readline().split()))
        number_2 = list(map(int, stdin.readline().split()))
        same = 0
        for n in number_2:
            if n in number_1: same += 1
        stdout.write(str(same) + '\n')
