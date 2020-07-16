#include <iostream>

int main(void) {
  std::string number;
  while (std::cin >> number) {
    int sum = 0;
    for (int i = 0; i < 8; i++) {
      sum += (int)number[i] * (8 - i);
    }
    int n = ((sum) % 10 + (int)number[8] - 10) % 10;
    switch (n) {
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
        std::cerr << "FS" << '\n';
        break;
      case 7:
        std::cerr << "ER" << '\n';
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

// 10 - number[8] = (sum % 10 + n % 10) % 10
