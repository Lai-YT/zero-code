while True:
    a, b = map(int, input().split())
    if a == 0 == b: break
    num_of_sqn = int(b ** 0.5) - int(a ** 0.5)
    if int(a ** 0.5) == a ** 0.5: num_of_sqn += 1
    print(num_of_sqn)
