from sys import stdin


def get_amount_of_square(n: int) -> int:
    return (n * (n + 1) * (2 * n + 1)) // 6


for n in map(int, stdin):
    if not n:
        break
    print(get_amount_of_square(n))
