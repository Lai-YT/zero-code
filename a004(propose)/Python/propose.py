

while True:
    try:
        year = int(input())
        if(year % 400 == 0 or (year % 4 == 0 and year % 100 != 0)):
            print("閏年", end = "\n")
        else:
            print("平年", end = "\n")
    except:
        break
