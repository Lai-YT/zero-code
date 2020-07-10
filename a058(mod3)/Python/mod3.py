
while True:
    try:
        amount = int(input())
        correspond = [0, 0, 0] # 3k, 3k + 1, 3k + 2
        for i in range(amount):
            number = int(input())
            correspond[number % 3] += 1
        print(f'{correspond[0]} {correspond[1]} {correspond[2]}')
    except:
        break
