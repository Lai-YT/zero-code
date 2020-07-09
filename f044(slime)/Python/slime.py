king_slime, small_slime = map(int, input().split())
small_slime /= king_slime
king_slime = 1
total = king_slime + small_slime
days = 0
while  total != 1:
    total /= 2
    days += 1
print(days)
