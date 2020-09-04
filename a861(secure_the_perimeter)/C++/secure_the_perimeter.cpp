#include <iostream>

int main(int argc, char const *argv[]) {
  int h, w;
  while (std::cin >> h >> w) {
    std::cout << (h + w) * 2 << '\n';
  }
  return 0;
}
