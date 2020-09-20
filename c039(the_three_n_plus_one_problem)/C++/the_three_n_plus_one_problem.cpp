#include <iostream>
#include <map>
#include <algorithm>

int func(int n) {
  int count = 1;
  while (n != 1) n = (n % 2? 3 * n + 1: n / 2), count++;
  return count;
}

std::map<int, int> record;

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int i, j;
  while (std::cin >> i >> j) {
    std::cout << i << ' ' << j << ' ';
    if (i > j) std::swap(i, j);
    int max = 0, curr;
    for (;i <= j; i++) {
      if (record.find(i) != record.end()) curr = record[i];
      else curr = func(i), record[i] = curr;
      if (curr > max) max = curr;
    }
    std::cout << max << '\n';
  }
  return 0;
}
