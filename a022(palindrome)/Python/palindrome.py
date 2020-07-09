
def palindrome(input_string: list) -> bool:
    input_reverse = input_string.copy()
    input_reverse.reverse()
    for i in range(len(input_string)):
        if input_string[i] != input_reverse[i]:
            return False
    return True

while True:
    try:
        input_string = list(input())
        if palindrome(input_string):
            print('yes')
        else:
            print('no')
    except:
        break
