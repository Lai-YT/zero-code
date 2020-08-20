from sys import stdin, stdout
while True:
    str = stdin.readline().strip('\n')
    if not str: break
    l = len(str)
    while l:
        stdout.write(str + '\n')
        str = str[1:] + str[0]
        l -= 1
