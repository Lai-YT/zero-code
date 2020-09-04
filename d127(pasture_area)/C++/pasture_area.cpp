#include <iostream>

int main(int argc, char const *argv[]) {
  long long length;
  while (std::cin >> length) {
    std::cout << (length >> 2) * ((length >> 1) - (length >> 2)) << '\n';
  }
  return 0;
}
