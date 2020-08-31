#include <iostream>
#define min(a, b) (a < b ? a : b)

unsigned long long get_nth_ugly_number(int n) {
  unsigned long long ugly_numbers[n] = {1};
  int i2 = 0, i3 = 0, i5 = 0;
  unsigned long long next_2 = 2, next_3 = 3, next_5 = 5, next_ugly = 1;
  for (int i = 1; i < n; i++) {
    ugly_numbers[i] = next_ugly = min(min(next_2, next_3), next_5);
    if (next_ugly == next_2) next_2 = ugly_numbers[++i2] * 2;
    if (next_ugly == next_3) next_3 = ugly_numbers[++i3] * 3;
    if (next_ugly == next_5) next_5 = ugly_numbers[++i5] * 5;
  }
  return next_ugly;
}

int main(int argc, char const *argv[]) {
  std::cout << "The 1500'th ugly number is " << get_nth_ugly_number(1500) << ".\n";
  return 0;
}
