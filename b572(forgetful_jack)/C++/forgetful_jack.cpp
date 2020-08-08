#include <iostream>

int main(int argc, char const *argv[]) {
  int num_of_cases, now_hour, now_min, arr_hour, arr_min, cost_min, least_min;
  while (std::cin >> num_of_cases) {
    for (int c = 0; c < num_of_cases; c++) {
      std::cin >> now_hour >> now_min >> arr_hour >> arr_min >> cost_min;
      least_min = 60 * (arr_hour - now_hour) + arr_min - now_min;
      if (least_min >= cost_min) std::cout << "Yes" << '\n';
      else std::cout << "No" << '\n';
    }
  }
  return 0;
}
