from sys import stdin, stdout

def sod(n: int) -> int:
    sum = 0
    while n // 10:
        sum += n % 10
        n //= 10
    return sum + n % 10

def fun_1(a: int) -> int:
    for i in range(1, a + 1):
        if i + sod(i) == a:
            return i
    return -1

def func_2(a: int, b: int) -> int:
    ans = 0
    for i in range(a, b + 1):
        cnt = 0
        for j in range(1, i + 1):
            if j + sod(j) == i:
                cnt += 1
        if not cnt:
            ans += 1
    return ans

num_of_case = int(stdin.readline())
for i in range(num_of_case):
    input = [int(x) for x in stdin.readline().split(' ')]

    result = 0
    if len(input) == 1:
        result = fun_1(input[0])
    else:
        result = func_2(input[0], input[1])
    stdout.write(f'Case {i + 1}: {result}\n')
