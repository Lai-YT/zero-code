

while True:
    try:
        code = input()
        for i in range(6):
            print(abs(ord(code[i]) - ord(code[i + 1])), end = '')
        print()
    except:
        break
