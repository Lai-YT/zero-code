
while True:
    try:
        n = int(input())
        sum = 1
        for i in range(1, n + 1):
            sum += int(1 + i * (i - 1) / 2)
        print(sum)
    except:
        break
