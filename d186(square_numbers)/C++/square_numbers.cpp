#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]) {
  int a, b;
  while (std::cin >> a >> b) {
    if (a == 0 && b == 0) break;
    sqrt(a) == (int)sqrt(a)?
    std::cout << (int)sqrt(b) - (int)sqrt(a) + 1 << '\n':
    std::cout << (int)sqrt(b) - (int)sqrt(a) << '\n';
  }
  return 0;
}
