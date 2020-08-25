#include <iostream>

int main(int argc, char const *argv[]) {
  int low, up, n;
  while (std::cin >> low >> up) {
    low += low % 2;
    up -= up % 2;
    std::cout << (up - low) / 2 + 1 << '\n';
  }
  return 0;
}
