while True:
    try:
        n, m = map(int, input().split())
        satiety = list(map(int, input().split()))
        partial_sum_of_satiety = [0]
        cases = []
        sum = 0
        for i in range(n):
            sum += satiety[i]
            partial_sum_of_satiety.append(sum)
        for i in range(m):
            begin, end = map(int, input().split())
            cases.append(partial_sum_of_satiety[end] - partial_sum_of_satiety[begin - 1])
        for case in cases:
            print(case)
    except EOFError:
        break
