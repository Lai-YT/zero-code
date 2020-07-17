
def is_prime(number: int) -> bool:
    if number == 2 or number == 3:
        return True
    elif number % 6 != 1 and number % 6 != 5:
        return False;
    else:
        ceil = int(number ** 0.5);
    for i in range(5, ceil + 1, 6):
        if number % i == 0 or number % (i+2) == 0:
            return False
    # 1 is not a prime number
    return number != 1


while True:
    try:
        start, end = map(int, input().split())
        count = 0;
        # start with 1 and 2 need to be handled
        if start == 2 or (start == 1 and end != 1):
            count = 1;
            for i in range(3, end + 1, 2):
                if is_prime(i): count += 1
        elif start % 2 == 0:
            for i in range(start + 1, end + 1, 2):
                if is_prime(i): count += 1
        else:
            for i in range(start, end + 1, 2):
                if is_prime(i): count += 1
        print(count)
        
    except:
        break
