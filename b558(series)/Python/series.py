
def term(n: int) -> int:
    return int(1 + n * (n - 1) / 2)

while True:
    number = 0
    try: number = int(input())
    except: break
    print(term(number))
