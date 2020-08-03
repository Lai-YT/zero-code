from sys import stdin
while True:
    line = stdin.readline()
    if not line: break
    max_len_of_tape, num_of_label = map(int, line.split())
    labels = list(map(int, stdin.readline().split()))
    accum_len, piece = labels[0], 0
    for i in range(1, num_of_label):
        len_of_interval = labels[i] - labels[i-1]
        if len_of_interval + accum_len > max_len_of_tape:
            accum_len = len_of_interval
            piece += 1
        elif len_of_interval + accum_len == max_len_of_tape:
            accum_len = 0
            piece += 1
        else: accum_len += len_of_interval
    if accum_len != 0: piece += 1 # last piece
    print(piece)
