from sys import stdin, stdout
while True:
    amount = stdin.readline()
    if not amount: break
    amount = int(amount)
    stdout.write(f'{(amount // 12) * 50 + (amount % 12) * 5}\n')
