
def to_binary(decimal_number: int) -> str:
    binary_number = ''
    while decimal_number != 0:
        binary_number += str(decimal_number % 2)
        decimal_number //= 2
    binary_number = ''.join(reversed(binary_number))
    return binary_number

while True:
    try:
        decimal_number = int(input())
        print(to_binary(decimal_number))
    except:
        break
