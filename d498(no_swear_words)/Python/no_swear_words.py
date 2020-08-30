from sys import stdin, stdout
while True:
    times = stdin.readline()
    if not times: break
    stdout.write('I don\'t say swear words!\n' * int(times))
