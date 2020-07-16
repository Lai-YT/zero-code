code = {'A': 10, 'B': 11, 'C': 12, 'D': 13, 'E': 14, 'F': 15, 'G': 16, 'H': 17, 'I': 34,
        'J': 18, 'K': 19, 'L': 20, 'M': 21, 'N': 22, 'O': 35, 'P': 23, 'Q': 24, 'R': 25,
        'S': 26, 'T': 27, 'U': 28, 'V': 29, 'W': 32, 'X': 30, 'Y': 31, 'Z': 33}
while True:
    try:
        number = input()
        sum = 0
        for i in range(8):
            sum += int(number[i]) * (8 - i)
        for k, n in code.items():
            c = (10 - (sum + (n // 10) * 1 + (n % 10) * 9) % 10) % 10
            if c == int(number[8]):
                print(k, end = '')
        print()
    except:
        break
