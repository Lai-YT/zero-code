while True:
    try:
        ceil = int(input())
        if ceil == 0: break
        print(*[i for i in range(ceil) if i % 7 != 0])
    except:
        break
