#include <iostream>

int main(void) {
  int a, b, n;
  while (std::cin >> a >> b >> n) {
    std::cout << a / b << ".";

    int digit = 0;
    while (digit != n) {
      a = a % b;
      a *= 10;
      std::cout << a / b;
      digit++;
    }
    std::cout << '\n';
  }

  return 0;
}
