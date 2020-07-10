while True:
    try:
        gene = list(map(int, input().split()))
        gene.pop(0)
        gene.sort()
        consecutive = True
        for i in range(len(gene)-1):
            if gene[i] + 1 != gene[i+1]:
                consecutive = False
        print(gene[0], gene[len(gene)-1], end = ' ')
        if consecutive:
            print('yes')
        else:
            print('no')
    except:
        break
