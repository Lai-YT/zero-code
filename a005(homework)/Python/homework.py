while True:
    try:
        number_of_sequences = input()
        for i in range(int(number_of_sequences)):
            sequence = list(input().split())
            for i in range(len(sequence)):
                sequence[i] = int(sequence[i])
            if(sequence[1]-sequence[0] == sequence[2]-sequence[1] == sequence[3]-sequence[2]):
                print(*sequence, sequence[3]+(sequence[3]-sequence[2]))
            elif(sequence[1]/sequence[0] == sequence[2]/sequence[1] == sequence[3]/sequence[2]):
                print(*sequence, int(sequence[3]*(sequence[3]/sequence[2])))
    except:
        break
