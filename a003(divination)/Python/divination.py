

month, date = map(int, input().split())
fortune = (month*2 + date) % 3
if fortune == 0:
    print("普通")
elif fortune == 1:
    print("吉")
elif fortune == 2:
    print("大吉")
