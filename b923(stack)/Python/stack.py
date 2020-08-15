from sys import stdin

while True:
    num_of_commands = stdin.readline()
    if not num_of_commands: break
    command = []
    stack = []
    for i in range(int(num_of_commands)):
        command = list(stdin.readline().split())
        if len(command) == 2: stack.append(command[1])
        elif command[0] == '1': stack.pop()
        else: print(stack[-1])
