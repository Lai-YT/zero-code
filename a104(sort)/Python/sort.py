while True:
    try:
        num_of_nums = int(input())
        numbers = list(map(int, input().split()))
        for i in range(num_of_nums - 1):
            for j in range(num_of_nums - 1 - i):
                if numbers[j] > numbers[j + 1]:
                    numbers[j], numbers[j + 1] = numbers[j + 1], numbers[j]
        for n in numbers:
            print(n, end = ' ')
        print()
    except:
        break
