
while True:
    try:
        num_of_fields = int(input())
        fields = list(map(int, input().split()))
        flowers = 0
        start, end = 0, 0
        fence_position = [i for i in range(num_of_fields) if fields[i] == 1]
        i = 0
        while i < len(fence_position) - 1:
            start, end = fence_position[i],  fence_position[i + 1]
            j = start + 1
            while j < end:
                if fields[j] == 0 and fields[j + 1] != 9 and fields[j - 1] != 9:
                    flowers += 1
                j += 1
            i += 1
        print(flowers)
    except:
        break
