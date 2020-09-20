from sys import stdin, stdout

while True:
    k = stdin.readline()
    if not k: break
    k = int(k)
    count, sum = 0, 0

    while k >= sum:
        count += 1
        sum += 1 / count
    stdout.write(str(count) + '\n')
