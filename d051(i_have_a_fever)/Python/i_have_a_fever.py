from sys import stdin

while True:
    fahrenheit = stdin.readline()
    if not fahrenheit: break
    print(f'{(float(fahrenheit) - 32) / 1.8:.3f}')
