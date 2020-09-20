from sys import stdin, stdout

def amount(k, m, a, n):
    if n > k: return False
    for i in range(a, -1, -1):
        if (k - (m * i)) % n == 0: return True
    return False

while True:
    test = stdin.readline().rstrip()
    if not test: break
    for t in range(int(test)):
        k = int(stdin.readline())
        m, n = map(int, stdin.readline().split())
        if m < n: m, n = n, m
        if n == 1:
            stdout.write('good\n')
            continue
        for i in range(k, -1, -1):
            if i == 0:
                stdout.write('good\n')
            elif not amount(i, m, i // m, n):
                stdout.write(str(i) + '\n')
                break
