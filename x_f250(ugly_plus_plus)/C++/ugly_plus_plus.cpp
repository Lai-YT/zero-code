#include <iostream>
#define min(a, b) (a < b ? a : b)

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int quest, place, i2, i3, i5;
  unsigned long long next_2, next_3, next_5, next_ugly;
  while (std::cin >> quest) {
    while (quest--) {
      std::cin >> place;
      unsigned long long ugly_numbers[place] = {1};
      i2 = i3 = i5 = 0;
      next_2 = 2; next_3 = 3; next_5 = 5;
      for (int i = 1; i < place; i++) {
        ugly_numbers[i] = next_ugly = min(min(next_2, next_3), next_5);
        if (next_ugly == next_2) next_2 = ugly_numbers[++i2] * 2;
        if (next_ugly == next_3) next_3 = ugly_numbers[++i3] * 3;
        if (next_ugly == next_5) next_5 = ugly_numbers[++i5] * 5;
      }
      std::cout << ugly_numbers[place-1] << '\n';
    }
  }
  return 0;
}
