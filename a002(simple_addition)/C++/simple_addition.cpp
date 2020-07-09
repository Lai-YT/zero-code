#include <iostream>

int main(void) {
  int augend, addend;
  while (std::cin >> augend >> addend) {
    std::cout << augend + addend << '\n';
  }
  return 0;
}
