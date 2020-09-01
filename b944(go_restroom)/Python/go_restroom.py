from sys import stdin, stdout

limit = int(stdin.readline())
urinal = [0 for i in range(limit + 2)] # head and tail are always 0
remain_time = [0 for i in range(limit)]
remain = limit
new = 0
while True:
    line = stdin.readline()
    if not line: break
    num, time = map(int, line.split())
    if remain:
        for i in range(1, limit + 1):
            if urinal[i]: continue
            if not urinal[i-1] and not urinal[i+1]:
                new = i
                break
        else:
            for i in range(1, limit + 1):
                if not urinal[i]:
                    new = i
                    break
        urinal[new] = num
        remain_time[new - 1] = time
        remain -= 1
    else:
        stdout.write('  Not enough\n')
        new = 0
    stdout.write('Number: ' + ' '.join(map(str, urinal[1:limit+1])) \
    + '\n  Time: ' + ' '.join(map(str, remain_time)) + '\n')
    if not time and new:
        urinal[new] = 0
        remain += 1
    for i, t in enumerate(remain_time):
        if t:
            remain_time[i] -= 1
            if not remain_time[i]:
                urinal[i + 1] = 0
                remain += 1
