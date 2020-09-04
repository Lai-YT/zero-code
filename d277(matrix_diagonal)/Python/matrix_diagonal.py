from sys import stdin, stdout

while True:
    amount = stdin.readline()
    if not amount: break
    amount = int(amount)
    stdout.write(f'{amount - amount % 2}\n')
