from sys import stdin

def is_ugly(n: int) -> bool:
    while n % 5 == 0: n /= 5
    while n % 3 == 0: n /= 3
    while n % 2 == 0: n /= 2
    return n == 1

while True:
    cases = stdin.readline()
    if not cases: break
    cases = int(cases)
    while cases:
        cases -= 1
        place = int(stdin.readline())
        count, n = 0, 1
        while count != place:
            count += is_ugly(n)
            n += 1
        print(n - 1)
