#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int n, m;
  while (std::cin >> n >> m) {
    int satiety[n];
    int partial_sum_of_satiety[n + 1];
    int sum = 0;
    partial_sum_of_satiety[0] = 0;
    for (int i = 0; i < n; i++) {
      std::cin >> satiety[i];
      sum += satiety[i];
      partial_sum_of_satiety[i + 1] = sum;
    }
    for (int i = 0; i < m; i++) {
      int begin, end;
      std::cin >> begin >> end;
      std::cout << partial_sum_of_satiety[end] - partial_sum_of_satiety[begin - 1] << '\n';
    }
  }
  return 0;
}
