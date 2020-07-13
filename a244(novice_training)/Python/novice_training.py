
while True:
    try:
        num_of_cases = int(input())
        result = []
        for i in range(num_of_cases):
            a, b, c = map(int, input().split())
            if a == 1: result.append(b + c)
            elif a == 2: result.append(b - c)
            elif a == 3: result.append(b * c)
            elif a == 4: result.append(b // c)
        for number in result:
            print(number)
    except:
        break
