from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    names = list(line.split())
    word = stdin.readline().rstrip()
    for name in names:
        stdout.write(word + ', ' + name + '\n')
