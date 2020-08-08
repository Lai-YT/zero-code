from sys import stdin, stdout
while True:
    line = stdin.readline()
    if line == '\n': continue
    if not line: break
    password = list(map(int, line.split()))
    try_times = int(stdin.readline())
    for i in range(try_times):
        try_password = list(map(int, stdin.readline().split()))
        try_count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
        count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
        a, b = 0, 0
        for j in range(4):
            if password[j] == try_password[j]: a += 1
            else:
                try_count[try_password[j] % 10] += 1
                count[password[j] % 10] += 1
        for j in range(10):
            if try_count[j] and count[j]:
                b += (try_count[j] if try_count[j] < count[j] else count[j])
                if b == (4 - a): break
        stdout.write(f'{a}A{b}B\n')
