from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    vector_1 = list(line.split())
    vector_2 = list(stdin.readline().split())
    vector = {}
    for component in vector_1:
        pos, value = component.split(':')
        vector[pos] = int(value)
    inner_product = 0
    for component in vector_2:
        pos, value = component.split(':')
        if pos in vector: inner_product += int(value) * vector[pos]
    stdout.write(f'{inner_product}\n')
