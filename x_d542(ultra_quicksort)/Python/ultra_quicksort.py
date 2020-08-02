from sys import stdin
while True:
    num_of_nums = int(input())
    if num_of_nums == 0: break
    numbers = []
    for n in range(num_of_nums):
        numbers += [int(stdin.readline())]
    swaps = 0
    for i in range(num_of_nums):
        for j in range(i+1, num_of_nums):
            if numbers[i] > numbers[j]: swaps += 1
    print(swaps)
