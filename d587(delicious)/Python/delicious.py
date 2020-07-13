
while True:
    try:
        num_of_nums = int(input())

        nums = list(map(int, input().split()))

        buckets = [0, 0, 0]

        for n in nums:
            buckets[n % 3] += 1

        for i in range(buckets[1]):
            print(1, end = ' ')
        for i in range(buckets[2]):
            print(2, end = ' ')
        for i in range(buckets[0]):
            print(3, end = ' ')
        print()
    except:
        break
