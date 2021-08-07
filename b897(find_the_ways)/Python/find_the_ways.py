import math
from sys import stdin


# logorithm of Stirling formula
def fact_log(n: int) -> float:
    return math.log10(math.sqrt(2 * n * math.pi)) + math.log10(n / math.e) * n


for line in stdin:
    total, remove = map(int, line.split())
    if remove == total:
        print(1)
        continue

    # # using combinations, make remove bigger:
    # # C(10, 8) == C(10, 2) but less calculation
    # if remove < (total >> 1):
    #     remove = total - remove
    #
    # # C(10, 8) = (10 * 9) / (1 * 2)
    # # digits = ceil( log( C(10, 8))) = ceil (log10 + log9 - log1 - log2)
    # digits: float = 0.0
    # for n in range(remove + 1, total + 1):
    #     digits += log10(n) - log10(total + 1 - n)
    # print(ceil(digits))

    # log(C(10, 8)) = log(fact_log(10) - fact_log(8) - fact_log(2))
    print(math.ceil(math.ceil(fact_log(total) - fact_log(remove) - fact_log(total - remove))))
