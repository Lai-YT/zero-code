#include <iostream>

int main(int argc, char const *argv[]) {
  long long a, b;
  while (std::cin >> a >> b) {
    std::cout << (a > b ? a - b : b - a) << '\n';
  }
  return 0;
}
