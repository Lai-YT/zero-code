#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char const *argv[]) {
  double distance, length, a, b;
  while (std::cin >> distance >> length) {
    a = length / 2;
    b = sqrt((length * length) / 4 - (distance * distance) / 4);
    std::cout << std::fixed << std::setprecision(3) << M_PI * a * b << '\n';
  }
  return 0;
}
