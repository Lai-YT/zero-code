while True:
    try:
        n, m = map(int, input().split())
        if n == 0 or n > m or m > 1000000:
            break
        count = False
        for number in range(n, m):
            power = len(str(number))
            if number == sum([int(n) ** power for n in str(number)]):
                count = True
                print(number, end = ' ')
        if not count:
            print('none', end = '')
        print()
    except:
        break
