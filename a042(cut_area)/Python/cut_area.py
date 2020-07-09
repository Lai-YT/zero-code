
while True:
    try:
        n = int(input())
        if n == 1:
            print('2')
            continue
        num_of_areas = n ** 2 - n + 2
        print(num_of_areas)
    except:
        break
