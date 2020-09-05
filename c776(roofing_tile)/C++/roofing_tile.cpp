#include <iostream>

int main(int argc, char const *argv[]) {
  int n , m;
  while (std::cin >> n >> m) {
    std::cout << n * m * 3 + n * 2 + m << '\n';
  }
  return 0;
}
