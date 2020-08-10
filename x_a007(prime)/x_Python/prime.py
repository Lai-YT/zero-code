
primes = [2, 3, 5, 7, 11, 13, 17, 19, 23]
for n in range(25, int(2147483647 ** 0.5) + 1, 2):
    if n % 6 == 1 or n % 6 == 5:
        ceil = int(n ** 0.5);
        for i in range(5, ceil + 1, 6):
            if n % i == 0 or n % (i+2) == 0: break
        else: primes.append(n)

def is_prime(number: int) -> bool:
    if number == 2 or number == 3:
        return True
    if number % 6 != 1 and number % 6 != 5:
        return False
    if number in primes:
        return True
    return False

while True:
    try: number = int(input())
    except: break
    if is_prime(number): print("質數")
    else: print("非質數")
