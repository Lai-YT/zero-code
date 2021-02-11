from sys import stdin, stdout

dp = [0, 1, 2]
for _ in range(10001):
    n = dp[-1] + dp[-2]
    if n > 1000000007:
        n %= 1000000007
    dp.append(n)

while True:
    num = stdin.readline()
    if not num:
        break
    stdout.write(f'{dp[int(num)]}\n')
