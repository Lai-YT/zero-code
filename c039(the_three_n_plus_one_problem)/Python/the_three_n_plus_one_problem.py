from sys import stdin, stdout

def func(n: int) -> int:
    count = 1
    while n != 1:
        if n % 2: n = 3 * n + 1
        else: n //= 2
        count += 1
    return count

record = {}

while True:
    line = stdin.readline().rstrip('\n')
    if not line: break
    stdout.write(line + ' ')
    i, j = map(int, line.split())
    if i > j: i, j = j, i
    max = 0
    for n in range(i, j + 1):
        if n in record: curr = record[n]
        else:
            curr = func(n)
            record[n] = curr
        if curr > max: max = curr
    stdout.write(str(max) + '\n')
