from statistics import mean

while True:
    try:
        scores = list(map(int, input().split()))
        print('no') if mean(scores[1:]) > 59 else print('yes')
    except:
        break
