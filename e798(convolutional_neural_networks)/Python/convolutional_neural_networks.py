from sys import stdin, stdout
while True:
    try:
        size = int(input())
        graph = []
        for i in range(size):
            graph.append(list(map(int, stdin.readline().split())))
            result = []
        for i in range(0, size, 2):
            for j in range(0, size, 2):
                sub = [graph[i][j], graph[i+1][j], graph[i][j+1], graph[i+1][j+1]]
                sub.sort()
                result.append(sub[3]);
        for index, value in enumerate(result):
            if (index + 1) % (size // 2) == 0:
                stdout.write(f'{value}\n')
            else: stdout.write(f'{value} ')
    except EOFError: break
