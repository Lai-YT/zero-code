#include <iostream>

int main(int argc, char const *argv[]) {
  long long n;
  while (std::cin >> n) {
    std::cout << (n + 1) * (n + 1) * 3 / 2 - 9 << '\n';
  }
  return 0;
}
