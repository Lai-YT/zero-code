from sys import stdin, stdout
while True:
    number = int(stdin.readline())
    if not number : break
    count = 0
    while (number % 2):
        count += 1
        number //= 2
    stdout.write(f'{count}\n')
