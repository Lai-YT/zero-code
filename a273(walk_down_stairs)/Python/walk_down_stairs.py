from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    now, jump = map(int, line.split())
    if jump == 0 and now == 0:
        stdout.write('Ok!\n')
    elif jump == 0 or now % jump:
        stdout.write('Impossib1e!\n')
    else:
        stdout.write('Ok!\n')
