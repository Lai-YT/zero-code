from math import gcd
from sys import stdin, stdout

while True:
    line = stdin.readline().strip()
    if not line: break
    operator = line[-1]
    numerator_1, denominator_1, numerator_2, denominator_2 = map(int, line[:-1].split())
    factor = gcd(denominator_1, denominator_2)
    new_numerator, new_denominator = 0, 0
    if operator == '+':
        new_numerator = numerator_1 * (denominator_2 // factor) + numerator_2 * (denominator_1 // factor)
        new_denominator = (denominator_1 // factor) * denominator_2
    elif operator == '-':
        new_numerator = numerator_1 * (denominator_2 // factor) - numerator_2 * (denominator_1 // factor)
        new_denominator = (denominator_1 // factor) * denominator_2
    elif operator == '*':
        new_numerator = numerator_1 * numerator_2
        new_denominator = denominator_1 * denominator_2
    else:
        new_numerator = numerator_1 * denominator_2
        new_denominator = denominator_1 * numerator_2
    if new_numerator == 0: stdout.write('0\n')
    elif new_numerator == new_denominator: stdout.write('1\n')
    elif new_numerator + new_denominator == 0: stdout.write('-1\n')
    else:
        factor = gcd(new_numerator, new_denominator)
        new_numerator //= factor
        new_denominator //= factor
        if new_denominator < 0:
            new_numerator *= -1
            new_denominator *= -1
        if new_denominator == 1: stdout.write(f'{new_numerator}\n')
        else: stdout.write(f'{new_numerator}/{new_denominator}\n')
