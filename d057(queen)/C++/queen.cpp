#include <iostream>

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  float x1, y1, x2, y2;
  while (std::cin >> x1 >> y1 >> x2 >> y2 && x1 && x2 && y1 && y2) {
    int step = 0;
    if (x1 == x2 && y1 == y2) {}
    else if (x1 == x2 || y1 == y2 || (y2 - y1)/(x2 - x1) == -1 || (y2 - y1)/(x2 - x1) == 1)
      step = 1;
    else step = 2;
    std::cout << step << '\n';
  }
  return 0;
}
