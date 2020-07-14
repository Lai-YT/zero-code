
def can_be_palindrome(sentence:str) -> bool:
    sentence_upper = sentence.upper()
    sentence_list = []
    for i in range(len(sentence_upper)):
        sentence_list.append(sentence_upper[i])

    mark = False
    for word in sentence_list:
        ascii = ord(word)
        if(65 <= ascii <= 90):
            if(sentence_list.count(word) % 2 != 0):
                if not mark:
                    sentence_list[sentence_list.index(word)] = 0
                    mark = True
                else:
                    return False
    return True

while True:
    try:
        sentence = input()
        if can_be_palindrome(sentence):
            print('yes !')
        else:
            print('no...')
    except:
        break
