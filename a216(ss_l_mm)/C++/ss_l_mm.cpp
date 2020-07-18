#include <iostream>

unsigned long int f(unsigned long int n) {
  return (n + 1) * n / 2;
}

unsigned long int g(unsigned long int n) {
  return n * (n + 1) * (n + 2) / 6;
}


int main(int argc, char const *argv[]) {
  unsigned long int n;
  while (std::cin >> n) {
    std::cout << f(n) << " " << g(n) << '\n';
  }

  return 0;
}
