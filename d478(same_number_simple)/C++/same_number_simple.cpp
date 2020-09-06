#include <iostream>

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int n, m, num;
  while (std::cin >> n >> m) {
    while (n--) {
      int same = 0;
      int number_1[m], number_2[m], curr_1 = 0, curr_2 = 0, a, b;
      for (int i = 0; i < m; i++) std::cin >> number_1[i];
      for (int i = 0; i < m; i++) std::cin >> number_2[i];
      while (curr_1 < m && curr_2 < m) {
        a = number_1[curr_1], b = number_2[curr_2];
        if (a == b) {
          same++;
          curr_1++;
          curr_2++;
        } else if (a < b) curr_1++;
        else curr_2++;
      }
      std::cout << same << '\n';
    }
  }
  return 0;
}
