roman_dict = {'M': 1000, 'CM': 900, 'D': 500, 'CD': 400, 'C': 100, 'XC': 90, 'L': 50,
              'XL': 40, 'X': 10, 'IX': 9, 'V': 5, 'IV': 4, 'I': 1}

def roman_to_decimal(roman_number: str) -> int:
    decimal_number, i = 0, 0
    while i < len(roman_number):
        if i + 1 < len(roman_number):
            check = roman_number[i] + roman_number[i + 1]
            if check == 'IV' or check == 'IX' or check == 'XL' \
            or check == 'XC' or check ==  'CD' or check == 'CM':
                decimal_number += roman_dict[roman_number[i:i+2]]
                i += 2
                continue
        decimal_number += roman_dict[roman_number[i]]
        i += 1
    return decimal_number

def decimal_to_roman(decimal_number: int) -> str:
    if decimal_number == 0: return 'ZERO'
    roman_number = []
    for numeral, value in roman_dict.items():
        times = decimal_number // value;
        roman_number.append(numeral * times);
        decimal_number %= value;
    return ''.join(roman_number)


while True:
    try:
        r1, r2 = input().split()
        n1 = roman_to_decimal(r1)
        n2 = roman_to_decimal(r2)
        difference = abs(n1 - n2)
        print(decimal_to_roman(difference))
    except:
        break
