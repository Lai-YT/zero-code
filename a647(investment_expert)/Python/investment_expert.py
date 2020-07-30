from sys import stdin, stdout

def round(n: float) -> float:
    is_nagative = False
    rounded = 0.0
    if n < 0:
        is_nagative = True
        n *= -1
    check = int(n * 1000 % 10)
    if check >= 5:
        rounded =  int(n * 100 + 1) / 100
    else: rounded = int(n * 100) / 100
    if is_nagative: return -rounded
    return rounded

while True:
    n = stdin.readline().strip('\n')
    if not n: break
    for i in range(int(n)):
        m, p = map(int, stdin.readline().split())
        profit_rate = (p - m) * 100 / m
        if profit_rate >= 10 or profit_rate <= -7:
            stdout.write(f'{round(profit_rate):.2f}% dispose\n')
        else: stdout.write(f'{round(profit_rate):.2f}% keep\n')
