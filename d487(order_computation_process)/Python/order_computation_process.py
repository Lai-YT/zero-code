
def factorial(n: int) -> int:
    if n < 0:
        raise ValueError('parameter of factorial can\'t be smaller then 0')
    if n == 1 or n == 0:
        print('1', end = ' ')
        return 1
    print(f'{n} *', end = ' ')
    return n * factorial(n-1)


while True:
    try:
        n = int(input())
        print(f'{n}! =', end = ' ')
        sum = factorial(n)
        print(f'= {sum}')
    except:
        break
