from sys import stdin
while True:
    line = stdin.readline()
    if not line: break
    m, n = map(int, line.split())
    ribbon = list(map(int, stdin.readline().split()))
    beauty = 0
    sub = {}
    for i in range(m):
        if ribbon[i] not in sub:
            sub[ribbon[i]] = 1
        else: sub[ribbon[i]] += 1
    if len(sub) == m: beauty += 1
    for i in range(m, n):
        if sub[ribbon[i - m]] > 1: sub[ribbon[i - m]] -= 1
        else: del sub[ribbon[i - m]]
        if ribbon[i] not in sub:
            sub[ribbon[i]] = 1
        else: sub[ribbon[i]] += 1
        if len(sub) == m: beauty += 1
    print(beauty)
