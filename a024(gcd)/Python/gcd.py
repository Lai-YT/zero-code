
def gcd(a: int, b: int) -> int:
    if b:
        return gcd(b, a % b)
    return a;

while True:
    try:
        a, b = map(int, input().split())
        print(gcd(a, b))
    except:
        break
