while True:
    a, n = input().split()
    if a == '0' and n == '0':
        print('All Over.')
        break
    print(int(a) ** int(n))
