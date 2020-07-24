def is_prime(number: int) -> bool:
    if number == 2 or number == 3:
        return True
    if number % 6 != 1 and number % 6 != 5:
        return False
    else:
        ceil = int(number ** 0.5)
        for n in range(5, ceil+1, 6):
            if number % n == 0 or number % (n+2) == 0:
                return False
    return number != 1


while True:
    try:
        number = int(input())
        if is_prime(number):
            print(number)
            continue
        for n in range(2, int(number ** 0.5) + 1):
            if number % n == 0 and is_prime(n):
                print(number // n)
                break
    except EOFError:
        break
