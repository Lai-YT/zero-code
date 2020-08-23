#include <iostream>

int main(int argc, char const *argv[]) {
  int curr, dest;
  while (std::cin >> curr >> dest)
    std::cout << (dest >= curr ? dest - curr : 100 - curr + dest) << '\n';
  return 0;
}
