while True:
    try:
        hour, min = map(int, input().split())
        min += 30
        hour += 2 + (min // 60)
        print(f'{hour % 24:02d}:{min % 60:02d}')
    except: break
