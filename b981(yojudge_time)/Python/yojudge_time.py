from sys import stdin, stdout

line = stdin.readline()
while line:
    part_time = 0
    total_time = 0
    for i in range(len(line)):
        l = line[i]
        if '0' <= l <= '9':
            part_time = part_time * 10 + int(l)
        else:
            if l == 'h':
                total_time += part_time * 3600000
                part_time = 0
            elif l == 'm':
                if (i + 1) < len(line) - 1 and line[i + 1] == 's':
                    total_time += part_time
                else:
                    total_time += part_time * 60000
                part_time = 0
            elif l == 's' and line[i - 1] != 'm':
                total_time += part_time * 1000
                part_time = 0
            elif l == '.':
                total_time += part_time * 1000 + int(line[i + 1]) * 100
                break
    stdout.write(f'{total_time}\n')
    line = stdin.readline()
