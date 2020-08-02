while True:
    try:
        num_of_carriages = int(input())
        carriages = list(map(int, input().split()))
        while num_of_carriages != len(carriages):
            carriages.extend(map(int, input().split()))
        swaps = 0
        for i in range(num_of_carriages-1):
            for j in range(num_of_carriages-i-1):
                if carriages[j] > carriages[j+1]:
                    carriages[j], carriages[j+1] = carriages[j+1], carriages[j]
                    swaps += 1
        print(swaps)
    except: break
