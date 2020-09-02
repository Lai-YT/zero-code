#include <iostream>

int main(int argc, char const *argv[]) {
  int first, last, diff;
  while (std::cin >> first >> last >> diff) {
    for (int i = first; i != last; i += diff) std::cout << i << ' ';
    std::cout << last << '\n';
  }
  return 0;
}
