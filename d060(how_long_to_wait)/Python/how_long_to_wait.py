from sys import stdin, stdout
while True:
    min = stdin.readline()
    if not min: break
    stdout.write(f'{(85 - int(min))%60}\n')
