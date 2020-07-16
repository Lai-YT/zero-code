
while True:
    try:
        num_of_nums = int(input())
        numbers = list(map(int, input().split()))
        numbers.sort(key = lambda num: num % 10)
        part_of_0 = 0
        for i in range(1, len(number)):
            if number[1] % 10 == number[0] % 10:
                part += 1
            else: break
        numbers[0:part+1].sort(reverse = True, key = lambda num: num // 10)


        print(numbers)
    except:
        raise
