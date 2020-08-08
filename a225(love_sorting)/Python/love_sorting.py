from functools import cmp_to_key

def compare(former: int, latter: int) -> int:
    if former % 10 == latter % 10:
        return latter - former
    return (former % 10) - (latter % 10)

while True:
    try:
        num_of_nums = int(input())
        numbers = list(map(int, input().split()))
        numbers.sort(key = cmp_to_key(compare))
        print(*numbers)
    except: break
