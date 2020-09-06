#include <iostream>

int main(void) {
  int n;
  while (std::cin >> n) {
    std::cout << (n & 1 ? "Odd" : "Even") << '\n';
  }
  return 0;
}
