while True:
    try:
        n, m = map(int, input().split())
        if n == 0 or n > m or m > 1000000:
            break
        count = 0
        for number in range(n, m):
            power = len(str(number))
            total = 0
            temp = number # avoid from changing number
            while temp != 0:
                total += (temp % 10) ** power
                temp //= 10
            if total == number:
                count += 1
                print(number, end = ' ')
        if count == 0:
            print('none', end = '')
        print()

    except:
        break
