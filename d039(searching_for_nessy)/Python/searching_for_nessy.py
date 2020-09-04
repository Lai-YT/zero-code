from sys import stdin

while True:
    num_of_cases = stdin.readline()
    if not num_of_cases: break
    for case in range(int(num_of_cases)):
        n, m = map(int, stdin.readline().split())
        print((n // 3) * (m // 3))
