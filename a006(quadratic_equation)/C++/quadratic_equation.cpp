#include <iostream>
#include <cmath>
#include <algorithm>

int main(void) {
  int a, b, c;
  while (std::cin >> a >> b >> c) {
    int discriminant = pow(b, 2) - 4*a*c;
    if(discriminant < 0) {
      std::cout << "No real root" << '\n';
    } else {
      int roots[2];
      roots[0] = ((-b) + sqrt(discriminant)) / (2*a);
      roots[1] = ((-b) - sqrt(discriminant)) / (2*a);
      if(roots[1] == roots[0]) {
        std::cout << "Two same roots x=" << roots[0] << '\n';
      } else {
        if(roots[1] > roots[0]) {
          std::swap(roots[0], roots[1]);
        }
        std::cout << "Two different roots x1=" << roots[0] << " , x2=" << roots[1] << '\n';
      }
    }
  }
  return 0;
}
