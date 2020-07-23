from sys import stdin, stdout

while True:
    line = stdin.readline().strip('\n')
    if not line: break
    a, b, c, d, e, f = map(int, line.split())
    #using Cramer's rule
    # ax + by = c, dx + ey = f
    delta = a * e - b * d
    if delta == 0:
        if a * f - c * d == 0: stdout.write('Too many\n')
        else: stdout.write('No answer\n')
        continue
    delta_x = c * e - b * f
    delta_y = a * f - c * d
    x = delta_x / delta
    y = delta_y / delta
    stdout.write(f'x={x:.2f}\ny={y:.2f}\n')
