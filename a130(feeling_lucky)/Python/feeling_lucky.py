
while True:
    try:
        num_of_cases = int(input())

        cases = []
        for i in range(num_of_cases):
            case = {}
            for j in range(10):
                website, relate = input().split()
                case[website] = int(relate)
            order_case = sorted(case.items(), key = lambda d: d[1])
            cases.append(order_case)
        for i in range(num_of_cases):
            print(f'Case #{i+1}:')
            best_relate = cases[i][9]
            for w in cases[i]:
                if w[1] == best_relate[1]:
                    print(w[0])
    except:
        break
