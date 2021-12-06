from sys import stdin, stdout


for line in stdin:
    # add an extra non-alphabetic char to make sure the last word iss counted
    line += '-';

    in_word: bool = False
    word_count: int = 0
    for c in line:
        if c.isalpha():
            in_word = True
        else:
            if in_word:
                word_count += 1
            in_word = False
    stdout.write(f'{word_count}\n')
