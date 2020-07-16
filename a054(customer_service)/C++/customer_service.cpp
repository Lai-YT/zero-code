#include <iostream>

int main(void) {
  std::string number;
  while (std::cin >> number) {
    int sum = 0;
    for (int i = 0; i < 8; i++) {
      sum += ((int)number[i] - 48) * (8 - i);
    }
    int n;
    if (10 - ((int)number[8] - 48) >= sum % 10) {
      n = 10 - ((int)number[8] - 48) - sum % 10;
    } else {
      n = 20 - ((int)number[8] - 48) - sum % 10;
    }
    switch (n % 10) {
      case 0:
        std::cout << "BNZ" << '\n';
        break;
      case 1:
        std::cout << "AMW" << '\n';
        break;
      case 2:
        std::cout << "KLY" << '\n';
        break;
      case 3:
        std::cout << "JVX" << '\n';
        break;
      case 4:
        std::cout << "HU" << '\n';
        break;
      case 5:
        std::cout << "GT" << '\n';
        break;
      case 6:
        std::cout << "FS" << '\n';
        break;
      case 7:
        std::cout << "ER" << '\n';
        break;
      case 8:
        std::cout << "DOQ" << '\n';
        break;
      case 9:
        std::cout << "CIP" << '\n';
        break;
    }
  }

  return 0;
}
