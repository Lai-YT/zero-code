# ver. 1 -- 2 func
# def merge_sort(numbers: list) -> list:
#     l = len(numbers)
#     if l <= 1:
#         return numbers
#     return merge(merge_sort(numbers[:l//2]), merge_sort(numbers[l//2:]))

# def merge(a: list, b: list) -> list:
#     la, lb = len(a), len(b)
#     i, j = 0, 0
#     sorted = []
#     while i < la and j < lb:
#         if a[i] < b[j]:
#             sorted.append(a[i])
#             i += 1
#         else:
#             sorted.append(b[j])
#             j += 1
#     sorted += a[i:] + b[j:]
#     return sorted

# ver. 2 -- single func
# def merge_sort(numbers: list) -> list:
#     l = len(numbers)
#     if l == 1:
#         return numbers
#     a = merge_sort(numbers[:l//2])
#     b = merge_sort(numbers[l//2:])
#     la, lb = len(a), len(b)
#     i, j = 0, 0
#     sorted = []
#     while i < la and j < lb:
#         if a[i] < b[j]:
#             sorted.append(a[i])
#             i += 1
#         else:
#             sorted.append(b[j])
#             j += 1
#     sorted += a[i:] + b[j:]
#     return sorted

# ver. 3 -- iterator
def merge_sort(numbers):
    l = len(numbers)
    if l <= 1:
        return numbers
    it1 = iter(merge_sort(numbers[:l//2])); x1 = next(it1)
    it2 = iter(merge_sort(numbers[l//2:])); x2 = next(it2)
    sorted = []
    try:
        while True:
            if x1 <= x2: sorted.append(x1); x1 = next(it1)
            else: sorted.append(x2); x2 = next(it2)
    except:
        if x1 <= x2: sorted.append(x2); sorted.extend(it2)
        else: sorted.append(x1); sorted.extend(it1)
    return sorted

from sys import stdin
while True:
    num_of_nums = stdin.readline()
    if not num_of_nums: break
    numbers = list(map(int, stdin.readline().split()))
    print(*merge_sort(numbers))
