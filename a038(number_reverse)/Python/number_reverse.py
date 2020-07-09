while True:
    try:
        number = input()

        zero_position = len(number)

        # from the LSB, find the last position of the consecutive zeros
        for i in range(len(number)-1, -1, -1):
            if number[i] == '0':
                zero_position -= 1
            else:
                break

        number_reversed = ''.join(reversed(number[:zero_position]))

        if number_reversed == '':
            number_reversed += '0'

        print(number_reversed)

    except:
        break
