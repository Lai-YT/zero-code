from sys import stdin
while True:
    line = stdin.readline()
    if not line: break
    row, col = map(int, line.split())
    num_of_targets = int(stdin.readline())
    pos = {}
    for i in range(row):
        col = list(stdin.readline().split())
        for p, t in enumerate(col):
            if t != '0': pos[t] = [i, p]
    if len(pos) < num_of_targets:
        print('Mission fail.')
        continue
    ordered_pos = sorted(pos.items(), key = lambda d: d[0])
    for n in range(num_of_targets):
        print(*ordered_pos[n][1])
