#include <iostream>

int main(void) {
  int a, b, r;
  while (std::cin >> a >> b >> r) {
    a = a && 1;
    b = b && 1;
    bool p = true;
    if ((a & b) == r) {
      p = false;
      std::cout << "AND\n";
    }
    if ((a | b) == r) {
      p = false;
      std::cout << "OR\n";
    }
    if ((a ^ b) == r) {
      p = false;
      std::cout << "XOR\n";
    }
    if (p) std::cout << "IMPOSSIBLE\n";
  }
  return 0;
}
