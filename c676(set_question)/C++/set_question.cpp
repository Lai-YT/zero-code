#include <iostream>

int main(int argc, char const *argv[]) {
  int n = 101;
  while (--n) {
    std::cout << n << " 1 " << n+1 << '\n';
  }
  return 0;
}
