while True:
    try:
        num_of_equations = int(input())
        are_roots_real = []
        for i in range(num_of_equations):
            a, b, c = map(int, input().split())
            det = b ** 2 - 4 * a * c
            if det < 0 or int(det ** 0.5) ** 2 != det:
                are_roots_real.append(False)
            else:
                are_roots_real.append(True)
        for real in are_roots_real:
            if real:
                print('Yes')
            else:
                print('No')
    except:
        break
