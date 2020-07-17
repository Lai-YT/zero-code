while True:
    try:
        prisoners, hats = map(int, input().split())
        if prisoners > hats:
            print(hats + 1)
        elif prisoners == hats:
            print(hats)
        else:
            raise ValueError('There can\'t be more hats than prisoners!')
    except:
        break
