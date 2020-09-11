from sys import stdin, stdout
def getstr():
    str = ''
    while True:
        ch = stdin.read(1)
        if ch == '\n' or not ch:
            return str
        str += ch

prev_length = 0
curr_length = 0
names = set()
while True:
    try:
        name = getstr()
        if not name: break
        names.add(name)
        curr_length = len(names)
        if curr_length != prev_length:
            stdout.write('0\n')
        else:
            stdout.write('1\n')
        prev_length = curr_length
