while True:
    try:
        num_of_nums = int(input())
        numbers = list(map(int, input().split()))
        record = {}
        for n in numbers:
            if n in record: record[n] += 1
            else: record[n] = 1
        record = sorted(record.items(), key = lambda n: n[1], reverse = True)
        m = record[0][1]
        modes = []
        for n in record:
            if n[1] == m:
                modes.append(n[0])
            else: break
        modes.sort()
        for mode in modes:
            print(f'{mode} {m}')
    except EOFError: break
