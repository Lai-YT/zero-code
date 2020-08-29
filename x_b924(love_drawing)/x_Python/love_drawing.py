from sys import stdin
while True:
    line = stdin.readline()
    if not line: break
    vertex, side = map(int, line.split())
    side_about_vertex = [0 for i in range(vertex + 1)]
    while side:
        a, b = map(int, stdin.readline().split())
        side_about_vertex[a] += 1
        side_about_vertex[b] += 1
        side -= 1
    odd = 0
    for side in side_about_vertex:
        odd += side % 2
        if odd > 2: break
    if odd != 0 and odd != 2: print('NO')
    else: print('YES')
