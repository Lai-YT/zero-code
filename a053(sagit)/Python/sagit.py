while True:
    try:
        number = int(input())
        score = 0
        if number < 0 or number > 100:
            break
        if number <= 10:
            score = number * 6
        elif number <= 20:
            score = 60 + (number - 10) * 2
        elif number <= 40:
            score = 80 + (number - 20) * 1
        else:
            score = 100
        print(score)
        
    except:
        break
