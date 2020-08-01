while True:
    try:
        days = int(input())
        amounts = list(map(int, input().split()))
        cost = 0
        for day in range(days):
            cost += amounts[day] * (day + 1)
        print(cost)
    except EOFError: break
