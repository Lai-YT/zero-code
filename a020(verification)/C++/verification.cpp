#include <iostream>

int decode(const char s) {
  switch (s) {
    case 'A': return 10;
    case 'B': return 11;
    case 'C': return 12;
    case 'D': return 13;
    case 'E': return 14;
    case 'F': return 15;
    case 'G': return 16;
    case 'H': return 17;
    case 'I': return 34;
    case 'J': return 18;
    case 'K': return 19;
    case 'L': return 20;
    case 'M': return 21;
    case 'N': return 22;
    case 'O': return 35;
    case 'P': return 23;
    case 'Q': return 24;
    case 'R': return 25;
    case 'S': return 26;
    case 'T': return 27;
    case 'U': return 28;
    case 'V': return 29;
    case 'W': return 32;
    case 'X': return 30;
    case 'Y': return 31;
    case 'Z': return 33;
    default: return false;
  }
}

int main(void) {
  std::string number;
  while(std::cin >> number) {
    int check = 0;
    int code = decode(number[0]);
    check += (code % 10) * 9;
    check += code / 10;
    for(int i = 1; i < 9; i++) {
      // minus 48 is to convert ASCII code to number
      check += (int(number[i]) - 48) * (9 - i);
    }
    check += (int(number[9]) - 48);
    if(check % 10 == 0) {
      printf("real\n");
    } else {
      printf("fake\n");
    }
  }

  return 0;
}
