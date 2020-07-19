while True:
    try:
        password = input()
        try_times = int(input())
        match = []
        for i in range(try_times):
            try_password = input()
            try_count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
            count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
            a, b = 0, 0
            for j in range(4):
                if password[j] == try_password[j]:
                    a += 1
                else:
                    try_count[int(try_password[j]) % 10] += 1
                    count[int(password[j]) % 10] += 1
            for j in range(10):
                if try_count[j] != 0 and count[j]:
                    b += (try_count[j] if try_count[j] < count[j] else count[j])
                    if b >= (4 - a): break
            match.append(f'{a}A{b}B')
        for try_case in match:
            print(try_case)
    except:
        break
