while True:
    try:
        a, n, i, k = map(int, input().split())
        result = [n for n in str(a ** n)]
        if len(result) >= i + k - 1:
            print(*result[i - 1:i + k - 1], sep = '')
        else:
            print(*result[i - 1:], sep = '')
    except EOFError:
        break
