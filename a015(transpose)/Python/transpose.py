while True:
    try:
        row_num, col_num = map(int, input().split())
        matrix = []
        row = []
        for i in range(row_num):
            row = list(input().split())
            for i in range(len(row)):
                row[i] = int(row[i])
            matrix.append(row)
        transposed = []
        for i in range(col_num):
            transposed.append([row[i] for row in matrix])
        for row in transposed:
            for entry in row:
                print(entry, end = " ")
            print() # new line
    except:
        break
