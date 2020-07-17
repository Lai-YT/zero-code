
roman_dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000,
              'IV': 4, 'IX': 9, 'XL': 40, 'XC': 90, 'CD': 400, 'CM': 900}

def roman_to_decimal(roman_number: str) -> int:
    deciml_number, i = 0, 0
    while i < len(roman_number):
        if i + 1 < len(roman_number):
            if roman_number[i] == 'I' and roman_number[i + 1] == 'V' \
                or roman_number[i] == 'I' and roman_number[i + 1] == 'X' \
                or roman_number[i] == 'X' and roman_number[i + 1] == 'L' \
                or roman_number[i] == 'X' and roman_number[i + 1] == 'C' \
                or roman_number[i] == 'C' and roman_number[i + 1] == 'D' \
                or roman_number[i] == 'C' and roman_number[i + 1] == 'M':
                deciml_number += roman_dict[roman_number[i:i+2]]
                i += 2
                continue
        deciml_number += roman_dict[roman_number[i]]
        i += 1
    return deciml_number

def partial_convert_to_roman(deciml_number: int, numeral: str, roman_number: list) -> int:
    times = deciml_number // roman_dict[numeral]
    deciml_number %= roman_dict[numeral]
    roman_number.append(numeral * times)
    return deciml_number

def decimal_to_roman(deciml_number: int) -> str:
    if deciml_number == 0:
        return 'ZERO'
    roman_number = []
    deciml_number = partial_convert_to_roman(deciml_number, 'M', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'CM', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'D', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'CD', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'C', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'XC', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'L', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'XL', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'X', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'IX', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'V', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'IV', roman_number)
    deciml_number = partial_convert_to_roman(deciml_number, 'I', roman_number)
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
