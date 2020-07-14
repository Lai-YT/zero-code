#include <iostream>
#include <cmath>

int main(void) {
  int num_of_equations;
  while (std::cin >> num_of_equations) {
    bool are_roots_real[num_of_equations];
    for(int i = 0; i < num_of_equations; i++) {
      int a, b, c;
      std::cin >> a >> b >> c;
      int det = pow(b, 2) - 4 * a * c;
      if (det < 0 || pow((int) sqrt(det), 2) != det)
        are_roots_real[i] = false;
      else are_roots_real[i] = true;
    }
    for (bool real: are_roots_real) {
      if (real) std::cout << "Yes" << '\n';
      else std::cout << "No" << '\n';
    }
  }

  return 0;
}
