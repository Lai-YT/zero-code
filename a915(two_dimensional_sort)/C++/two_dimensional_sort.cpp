#include <iostream>
#include <utility>
#include <algorithm>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_points;
  while (std::cin >> num_of_points) {
    std::pair<int, int> points[num_of_points];
    for (int i = 0; i < num_of_points; i++) {
      std::pair<int, int> point;
      std::cin >> point.first >> point.second;
      points[i] = point;
    }
    std::sort(points, points + num_of_points);
    for (auto point: points) std::cout << point.first << ' ' << point.second << '\n';
  }
  return 0;
}
