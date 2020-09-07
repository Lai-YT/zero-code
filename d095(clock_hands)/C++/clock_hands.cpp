#include <iostream>
#include <cmath>
#include <iomanip>

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  char c;
  double hour, min, hour_degree, min_degree, degree;
  while (std::cin >> hour >> c >> min && (hour || min)) {
    min_degree = 360 * (min / 60);
    hour_degree = 360 * (hour / 12) + 30 * (min / 60);
    degree = std::abs(hour_degree - min_degree);
    if (degree > 180) degree = 360 - degree;
    std::cout << std::fixed << std::setprecision(3) << degree << '\n';
  }
  return 0;
}
