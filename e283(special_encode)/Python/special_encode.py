from sys import stdin, stdout

code = {'0 1 0 1': 'A', '0 1 1 1': 'B', '0 0 1 0': 'C', '1 1 0 1': 'D', '1 0 0 0': 'E', '1 1 0 0': 'F'}
while True:
    num_of_letters = stdin.readline()
    if not num_of_letters: break
    num_of_letters = int(num_of_letters)
    while num_of_letters:
        num_of_letters -= 1
        encode = stdin.readline().rstrip()
        stdout.write(code[encode])
    stdout.write('\n')
