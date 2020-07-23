#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  
  double a, b, c, d, e, f;
  while (std::cin >> a >> b >> c >> d >> e >> f) {
    double delta = a * e - b * d;
    if (delta == 0) {
        if (a * f - c * d == 0) std::cout << "Too many" << '\n';
        else std::cout << "No answer" << '\n';
        continue;
    }
    double delta_x = c * e - b * f;
    double delta_y = a * f - c * d;
    double x = delta_x / delta;
    double y = delta_y / delta;
    std::cout << std::fixed << std::setprecision(2) << "x=" << delta_x / delta << "\ny=" << delta_y / delta << '\n';
  }
  return 0;
}
