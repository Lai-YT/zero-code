from sys import stdin, stdout

while True:
    times = stdin.readline()
    if not times: break
    for i in range(1, int(times) + 1):
        stdout.write(str(i) + '. I don\'t say swear words!\n')
