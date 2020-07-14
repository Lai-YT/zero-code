while True:
    try:
        a, b, n = map(int, input().split())

        print(f'{a//b}.', end = '')
        digit = 0
        while digit != n // 10:
            a = a % b
            a *= 10000000000
            d = (a // b)
            if len(str(d)) == 10: print(f'{d}', end = '')
            elif len(str(d)) == 9: print(f'0{d}', end = '')
            elif len(str(d)) == 8: print(f'00{d}', end = '')
            elif len(str(d)) == 7: print(f'000{d}', end = '')
            elif len(str(d)) == 6: print(f'0000{d}', end = '')
            elif len(str(d)) == 5: print(f'00000{d}', end = '')
            elif len(str(d)) == 4: print(f'000000{d}', end = '')
            elif len(str(d)) == 3: print(f'0000000{d}', end = '')
            elif len(str(d)) == 2: print(f'00000000{d}', end = '')
            elif d == 0: print('0000000000', end = '')
            else: print(f'000000000{d}', end = '')
            digit += 1
        digit = 0
        while digit != n % 10:
            a = a % b
            a *= 10
            print(f'{a//b}', end = '')
            digit += 1
        print()
    except:
        break
