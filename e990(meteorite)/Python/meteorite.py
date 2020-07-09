
from math import log2
while True:
    try:
        half_life, ratio = map(float, input().split())
        time = -1 * half_life * log2(ratio)
        print('{:.3f}'.format(time))
    except:
        break
