from sys import stdin, stdout
while True:
    weight = stdin.readline()
    if not weight: break
    weight = float(weight)
    height = float(stdin.readline()) * 0.01
    stdout.write(f'{weight / height ** 2: .1f}\n')
