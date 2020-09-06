from sys import stdin, stdout
while True:
    a = stdin.readline()
    if not a: break
    stdout.write('Odd\n' if int(a) % 2 else 'Even\n')
