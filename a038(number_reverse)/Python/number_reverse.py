from sys import stdin, stdout


for line in stdin:
    stdout.write(
        ('0' if int(line) == 0 else line.rstrip('0')[::-1])
    + '\n')
