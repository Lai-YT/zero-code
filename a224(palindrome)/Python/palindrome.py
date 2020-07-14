while True:
    try:
        sentence = input().upper()
        sentence_list = []
        for i in range(len(sentence)):
            sentence_list.append(sentence[i])
        mark = False
        palindrome = True

        for word in sentence_list:
            ascii = ord(word)
            if(65 <= ascii <= 90):
                if(sentence_list.count(word) % 2 != 0):
                    if not mark:
                        sentence_list[sentence_list.index(word)] = 0
                        mark = True
                    else:
                        palindrome = False
                        break
        if palindrome:
            print('yes !')
        else:
            print('no...')
    except:
        break
