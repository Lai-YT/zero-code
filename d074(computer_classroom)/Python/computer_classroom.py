while True:
    try:
        num_of_class = int(input())
        classes = list(map(int, input().split()))
        max = classes[0]
        for c in classes:
            if c > max: max = c
        print(max)
    except:
        break
