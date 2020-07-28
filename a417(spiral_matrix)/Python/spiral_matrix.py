
def spiral_square_trace(size: int) -> list:
    '''
    trace of a size by size spiral matrix, clockwise
    '''
    # initial condition:
    up, right, down, left = 0, size - 1, size - 1, 0
    x, y = 0, 0 # start from upper left
    # downward is positive x, rightward is positive y. For fitting the index of matrix
    direction = [[0, 1], [1, 0], [0, -1], [-1, 0]]
    trace = [[0, 0]]
    count = 1
    d = 0
    for count in range(1, size * size):
        x_ = x + direction[d][0]
        y_ = y + direction[d][1]
        if x_ < up or x_ > down or y_ < left or y_ > right:
            if d == 0: up += 1
            elif d == 1: right -= 1
            elif d == 2: down -= 1
            else: left += 1
            d = (d + 1) % 4
            x_ = x + direction[d][0]
            y_ = y + direction[d][1]
        trace.append([x_, y_])
        x, y = x_, y_
    return trace


while True:
    try:
        num_of_cases = int(input())
        for case in range(num_of_cases):
            n, m = map(int, input().split())
            # n by n all-zero matrix
            matrix = [[0 for i in range(n)] for j in range(n)]
            trace = spiral_square_trace(n)
            number = 1
            for coordinate in trace:
                matrix[coordinate[0]][coordinate[1]] = number
                number += 1
            if m == 1:
                for i in range(n):
                    for j in range(n):
                        print(f'{matrix[i][j]:5d}', end = '')
                    print()
            else:
                for i in range(n):
                    for j in range(n):
                        print(f'{matrix[j][i]:5d}', end = '')
                    print()
            print()
    except EOFError:
        break
