#include <iostream>
#include <iomanip>

int main(void) {
  double weight, height;
  while (std::cin >> weight >> height) {
    height /= 100;
    std::cout << std::fixed << std::setprecision(1) << weight / (height * height) << '\n';
  };
  return 0;
}
