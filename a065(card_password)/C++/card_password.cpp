#include <iostream>

int main(void) {
  std::string code;
  while (std::cin >> code) {
    for (int i = 0; i < 6; i++) {
      std::cout << abs((int)code[i] - (int)code[i + 1]);
    }
    std::cout << '\n';
  }


  return 0;
}
