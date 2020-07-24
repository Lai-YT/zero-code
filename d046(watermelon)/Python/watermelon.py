from sys import stdin, stdout
while True:
    line = stdin.readline().strip('\n')
    if not line: break
    num_of_watermelon = line
    line = stdin.readline()
    move = [w for w in map(int, line.split()) if w <= 10]
    stdout.write(f'{len(move)}\n')
