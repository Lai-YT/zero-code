def f(n: int) -> int:
    return int((1 + n) * n / 2)

def g(n: int) -> int:
    return int(n * (n + 1) * (n + 2) / 6)

while True:
    try:
        n = int(input())
        print(f(n), g(n))
    except:
        break
