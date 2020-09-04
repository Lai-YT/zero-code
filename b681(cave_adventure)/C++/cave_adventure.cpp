#include <iostream>

int main(int argc, char const *argv[]) {
  int pos;
  while (std::cin >> pos) {
    std::cout << (pos < 0 ? pos * (-2) : pos * 2 - 1) << '\n';
  }
  return 0;
}
