#include <iostream>

int main(int argc, char const *argv[]) {
  int number;
  while (std::cin >> number) {
    std::cout << 1 + number * (number - 1) / 2 << '\n';
  }
  return 0;
}
