
while True:
    try:
        start, goal = map(int, input().split())
        sum = 0
        count = 0
        while sum <= goal:
            sum += start
            count += 1
            start += 1
        if count == 0: count = 1
        print(count)
    except:
        break
