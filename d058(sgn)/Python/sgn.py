
while True:
    try:
        n = int(input())
        print('-1') if n < 0 else (print('1') if n > 0 else print('0'))
    except:
        break
