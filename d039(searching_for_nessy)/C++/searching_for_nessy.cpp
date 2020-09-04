#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_cases, n ,m;
  while (std::cin >> num_of_cases) {
    while (num_of_cases--) {
      std::cin >> n >> m;
      std::cout << (n / 3) * (m / 3) << '\n';
    }
  }
  return 0;
}
