from sys import stdin, stdout

while True:
    num_of_cases = stdin.readline().strip('\n')
    if not num_of_cases: break
    for c in range(int(num_of_cases)):
        x, y = map(int, stdin.readline().split())
        yee = 100 - x - y
        if 0 < yee <= 30:
            stdout.write('sad!\n')
        elif 30 < yee <= 60:
            stdout.write('hmm~~\n')
        elif 60 < yee < 100:
            stdout.write('Happyyummy\n')
        else:
            stdout.write('evil!!\n')
