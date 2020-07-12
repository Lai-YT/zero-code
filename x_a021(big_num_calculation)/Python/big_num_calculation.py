
# addition, subtraction complete.


expression = list(input())
operator = expression[expression.index(' ')+1]
num_1 = expression[ : expression.index(' ')]
num_2 = expression[expression.index(' ')+3 : ]
# print(expression)
# print(num_1, operator, num_2)

def addition(big: str, small: str) -> list:
    result = []
    carry = 0
    for i in range(len(small)):
        r = int(big[i]) + int(small[i]) + carry
        carry = r // 10
        result.append(r % 10)
    if len(big) == len(small):
        if carry == 1: result.append(1)
    else:
        result.append(int(big[len(small)]) + carry)
        for i in range(len(small)+1, len(big)):
            result.append(int(big[i]))
    return result


def subtraction(big: str, small: str) -> list:
    result = []
    borrow = 0
    if len(small) < len(big):
        for i in range(len(big) - len(small)):
            small.append('0')
    for i in range(len(big)):
        r = int(big[i]) - int(small[i]) - borrow
        if r <  0:
            borrow = 1
            r += 10
        else: borrow = 0
        result.append(r)
    for i in range(len(result)-1, 1, -1):
        if result[i] == 0:
            result.pop()
        else:
            break
    return result


num_1.reverse()
num_2.reverse()
result = []
if len(num_1) >= len(num_2):
    if operator == '+':
        result = addition(num_1, num_2)
    elif operator == '-':
        result = subtraction(num_1, num_2)
else:
    if operator == '+':
        result = addition(num_2, num_1)
    elif operator == '-':
        raise ValueError('Can\'t deal with negative cases.' )

result.reverse()
for n in result:
    print(n, end = '')
print()
