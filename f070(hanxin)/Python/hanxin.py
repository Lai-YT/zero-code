from sys import stdin, stdout

def mmi(a, m):
    n = 1
    while True:
        if (a * n) % m == 1:
            return n
        n += 1

while True:
    line = stdin.readline().strip('\n')
    if not line: break
    count = [0, 0, 0]
    remain = [0, 0, 0]
    count[0], remain[0] = map(int, line.split())
    for i in range(1, 3):
        count[i], remain[i] = map(int, stdin.readline().split())
    m = count[0] * count[1] * count[2]
    M, y, result = 0, 0, 0
    for i in range(3):
        M = m // count[i]
        y = mmi(M % count[i], count[i])
        result += remain[i] * M * y
    stdout.write(f'{result % m}\n')
