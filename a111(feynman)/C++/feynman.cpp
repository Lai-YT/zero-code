#include <iostream>


int GetAmountOfSquare(const int n) {
  return (n * (n + 1) * (2 * n + 1)) / 6;
}


int main(int argc, char const *argv[]) {
  int n = 0;
  while (std::cin >> n) {
    if (!n) {
      break;
    }
    std::cout << GetAmountOfSquare(n) << '\n';
  }
  return 0;
}
