from sys import stdin, stdout
while True:
    n = stdin.readline()
    if not n: break
    stdout.write(f'{(int(n) + 1) ** 2 * 3 // 2 - 9}\n')
