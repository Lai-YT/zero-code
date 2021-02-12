from sys import stdin, stdout

memory = [0 for _ in range(8)]
buffer = [0 for _ in range(8)]

for i in range(8):
    init_val = int(stdin.readline())
    memory[i] = init_val
num_of_command = int(stdin.readline())
for _ in range(num_of_command):
	format = stdin.readline().split(' ')
	command = format[0]
	if command[0] == 'L':
		rd = int(format[1])
		ms = int(format[2])
		buffer[rd] = memory[ms]
	elif command[0] == 'S':
		md = int(format[1])
		rs = int(format[2])
		memory[md] = buffer[rs]
	elif command[0] == 'A':
		rd = int(format[1])
		rs1 = int(format[2])
		rs2 = int(format[3])
		buffer[rd] = buffer[rs1] + buffer[rs2]
	else:
		rd = int(format[1])
		rs = int(format[2])
		buffer[rd] = buffer[rs]
stdout.write(f'{buffer[0]}\n{memory[0]}\n')
