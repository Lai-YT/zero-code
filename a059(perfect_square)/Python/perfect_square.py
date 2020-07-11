

while True:
    try:
        num_of_cases = int(input())
        case = []
        for i in range(num_of_cases):
            lower_limit = int(input())
            upper_limit = int(input())
            sum = 0
            for number in range(lower_limit, upper_limit+1):
                if int(number ** 0.5) ** 2 == number:
                    sum += number
            case.append(sum)
        for i in range(num_of_cases):
            print(f'Case {i+1}: {case[i]}')
    except:
        break
