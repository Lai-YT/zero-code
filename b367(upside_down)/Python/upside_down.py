while True:
    try:
        num_of_cases = int(input())
        for case in range(num_of_cases):
            length, width = map(int, input().split())
            graph = []
            for i in range(length):
                graph.extend(map(int, input().split()))
            change = False
            new_len = length * width
            for i in range(new_len):
                if graph[i] != graph[new_len-1-i]:
                    change = True
                    break
            if change: print('keep defending')
            else: print('go forward')
    except: break
