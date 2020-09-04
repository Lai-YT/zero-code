#include <iostream>

int main(void) {
  int min;
  while (std::cin >> min) {
    std::cout << (85 - min) % 60 << '\n';
  }
  return 0;
}
