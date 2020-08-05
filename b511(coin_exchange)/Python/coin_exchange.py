from sys import stdin

num_of_denos = 0
denominations = []
counts = []

def exchange(money, index_of_deno):
    print(money, index_of_deno, denominations, counts)
    if money == 0:
        print('(', end = '')
        print(*counts, sep = ',', end = ')\n')
        return
    if index_of_deno >= num_of_denos: return
    max_amount = money // denominations[index_of_deno]
    for amount in range(max_amount + 1):
        counts[index_of_deno] = amount
        exchange(money - denominations[index_of_deno] * amount, index_of_deno + 1)

while True:
    line = stdin.readline().strip('\n')
    if not line: break
    num_of_denos = int(line)
    denominations = list(map(int, stdin.readline().split()))
    counts = [0 for i in range(num_of_denos)]
    money = int(stdin.readline())
    exchange(money, 0)
