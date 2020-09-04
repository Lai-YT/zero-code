#include <iostream>
#include <iomanip>
int main(int argc, char const *argv[]) {
  double fahrenheit;
  while (std::cin >> fahrenheit) {
    std::cout << std::fixed << std::setprecision(3) << (fahrenheit - 32) / 1.8 << '\n';
  }
  return 0;
}
