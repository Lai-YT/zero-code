from sys import stdin, stdout

while True:
    line = stdin.readline()
    if not line: break
    penguin = stdin.readline()
    for p in range(1, int(line) + 1):
        stdout.write(f'{p} ')
    stdout.write('\n')
