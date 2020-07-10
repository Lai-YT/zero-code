while True:
    try:
        lucky_number = list(map(int, input().split()))
        number = list(map(int, input().split()))
        money = list(map(int, input().split()))

        total = 0
        match = False
        for l in lucky_number[:2]:
            for n, m in zip(number, money):
                if l == n:
                    total += m
        # third lucky number
        for n, m in zip(number, money):
            if lucky_number[2] == n:
                match = True
                total -= m
        if not match:
            total *= 2
        if total < 0:
            total = 0
        print(total)
    except:
        break
