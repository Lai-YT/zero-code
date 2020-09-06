from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    hour, min = map(int, line.split())
    if hour >= 17 or hour < 7 or (hour < 8 and min < 30):
        stdout.write("Off School\n")
    else: stdout.write('At School\n')
