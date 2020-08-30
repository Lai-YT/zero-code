def is_ugly(n: int) -> bool:
    while n % 5 == 0: n /= 5
    while n % 3 == 0: n /= 3
    while n % 2 == 0: n /= 2
    return n == 1

count = 6
n = 8
while count != 1500:
    count += is_ugly(n)
    n += 1
print(f'The 1500\'th ugly number is {n - 1}.')
