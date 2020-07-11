def is_prime(number: int) -> bool:
    # primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
    #         73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173]
    if number == 2 or number == 3:
        return True
    if number % 6 != 1 and number % 6 != 5:
        return False
    else:
        ceil = int(number ** 0.5)
        # for n in primes:
        #     if n < ceil:
        #         if number % n == 0:
        #             return False
        for n in range(5, ceil+1, 6):
            if number % n == 0 or number % (n+2) == 0:
                return False
        return True

def main():
    while True:
        try:
            number = int(input())
            if is_prime(number):
                print("質數")
            else:
                print("非質數")
        except:
            break

main()
