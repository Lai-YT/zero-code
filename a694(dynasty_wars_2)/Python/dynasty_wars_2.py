from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    n, m = map(int, line.split())
    matrix = [[0 for i in range(n + 1)] for i in range(n + 1)]
    for i in range(1, n + 1):
        row = list(map(int, stdin.readline().split()))
        for j in range(1, n + 1):
            matrix[i][j] = matrix[i-1][j] + matrix[i][j-1] - matrix[i-1][j-1] + row[j-1]
    for i in range(m):
        x1, y1, x2, y2 = map(int, stdin.readline().split())
        total = matrix[x2][y2] - matrix[x1-1][y2] - matrix[x2][y1-1] + matrix[x1-1][y1-1]
        stdout.write(f'{total}\n')
