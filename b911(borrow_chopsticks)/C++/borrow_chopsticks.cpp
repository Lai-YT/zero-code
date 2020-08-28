#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]) {
  double num;
  while (std::cin >> num) {
    std::cout << (int)log2(num) + 1 << '\n';
  }
  return 0;
}
