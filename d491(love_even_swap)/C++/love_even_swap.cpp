#include <iostream>

int main(int argc, char const *argv[]) {
  int low, up;
  while (std::cin >> low >> up) {
    if (low > up) {
      int tmp = low;
      low = up;
      up = tmp;
    }
    low += low % 2;
    up -= up % 2;
    std::cout << (up + low) * ((up - low) / 2 + 1) / 2 << '\n';
  }
  return 0;
}
