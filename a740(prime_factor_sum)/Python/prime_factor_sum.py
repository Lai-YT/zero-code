
def sum_of_prime_factors(number: int) -> int:
    sum = 0
    while number % 2== 0:
        sum += 2
        number //= 2
    ceil = int(number ** 0.5)
    for n in range(3, ceil + 1, 2):
        while number % n == 0:
            sum += n
            number //= n
    if number != 1: sum += number
    return sum

while True:
    try:
        number = int(input())
        print(sum_of_prime_factors(number))
    except: break
