from sys import stdin, stdout
from math import log
while True:
    num = stdin.readline()
    if not num: break
    stdout.write(f'{int(log(int(num), 2)) + 1}\n')
