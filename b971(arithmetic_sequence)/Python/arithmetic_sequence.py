from sys import stdin, stdout

while True:
    line = stdin.readline()
    if not line: break
    first, last, diff = map(int, line.split())
    for i in range(first, last, diff):
        stdout.write(f'{i} ')
    stdout.write(f'{last}\n')
