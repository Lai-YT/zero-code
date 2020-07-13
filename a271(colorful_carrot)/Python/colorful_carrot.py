
while True:
    try:
        num_of_cases = int(input())
        case = []
        for i in range(num_of_cases):
            x, y, z, w, n, m = map(int, input().split())
            days = list(map(int, input().split()))
            state = 0
            for d in days:
                if state: m -= n * state
                if m <= 0: break
                if d == 1: m += x
                elif d == 2: m += y
                elif d == 3: m -= z
                elif d == 4:
                    m -= w
                    state += 1
                elif d == 0: pass
            case.append(m)
        for m in case:
            if m > 0: print(f'{m}g')
            else: print('bye~Rabbit')
    except:
        break
