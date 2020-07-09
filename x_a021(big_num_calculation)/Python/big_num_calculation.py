
# addition complete.


expression = list(input())
operator = expression[expression.index(' ')+1]
num_1 = expression[ : expression.index(' ')]
num_2 = expression[expression.index(' ')+3 : ]
print(expression)
print(num_1, operator, num_2)

def addition(big, small) -> list:
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

def subtraction(big, small) -> list:
    result = []
    borrow = 0
    for i in range(len(small)):
        r = int(big[i]) - int(small[i]) - borrow
        if r <  0:
            borrow = 1
            r += 10
        else: borrow = 0
        print(f'r = {r}')
        result.append(r)
    if len(big) - len(small) == 1:
        if int(big[len(small)]) != borrow:
            result.append(int(big[len(small)]) - borrow)
    elif len(big) != len(small):
        result.append(int(big[len(small)]) - borrow)
        for i in range(len(small)+1, len(big)):
            r = int(big[i]) - borrow
            if r < 0:
                borrow = 1
                r += 10
            result.append(r)
    return result




num_1.reverse()
num_2.reverse()
if len(num_1) > len(num_2):
    if operator == '+':
        result = addition(num_1, num_2)
    elif operator == '-':
        result = subtraction(num_1, num_2)
else:
    if operator == '+':
        result = addition(num_2, num_1)
    elif operator == '-':
        if len(num_1) == len(num_2):
            for i in range(len(num_1)):
                if int(num_1[i]) > int(num_2[i]):
                    result = subtraction(num_1, num_2)
                    break
                elif int(num_1[i]) < int(num_2[i]):
                    result = subtraction(num_2, num_1)
                    break
            result = subtraction(num_1, num_2)
        else:
            result = subtraction(num_2, num_1)

result.reverse()
for n in result:
    print(n, end = '')
print()
