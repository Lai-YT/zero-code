while True:
    try:
        num_of_cases = int(input())
        answers = []
        for i in range(num_of_cases):
            case = input()
            product = 1
            for n in case:
                product *= int(n)
            answers.append(product)
        for product in answers:
            print(product)
    except:
        break
