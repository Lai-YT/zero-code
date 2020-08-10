#include <iostream>
#include <algorithm>
#include <utility>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_points;
  while (std::cin >> num_of_points) {
    if (num_of_points == 0) break;
    std::pair<int, int> points[num_of_points];
    double center_x = 0, center_y = 0;
    for (int p = 0; p < num_of_points; p++) {
      std::cin >> points[p].first >> points[p].second;
      center_x += points[p].first;
      center_y += points[p].second;
    }
    center_x /= num_of_points;
    center_y /= num_of_points;
    std::sort(points, points + num_of_points);
    bool symmetry = true;
    for (int i = 0; i < num_of_points / 2; i++) {
      if (points[i].first + points[num_of_points-1-i].first != center_x * 2 || points[i].second + points[num_of_points-1-i].second != center_y * 2) {
        std::cout << "no" << '\n';
        symmetry = false;
        break;
      }
    }
    if (symmetry) std::cout << "yes" << '\n';
  }
  return 0;
}
