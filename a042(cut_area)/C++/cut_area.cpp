#include <iostream>
#include <cmath>

int main(void) {
  int n;
  while (std::cin >> n) {
    if (n == 1) {
      std::cout << "2" << '\n';
    } else {
      int num_of_areas = pow(n, 2) - n + 2;
      std::cout << num_of_areas << '\n';
    }
  }

  return 0;
}
