#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_nums;
  while (std::cin >> num_of_nums) {
    std::string numbers[num_of_nums];
    for (std::string &n: numbers)
      std::cin >> n;
    std::sort(numbers, numbers + num_of_nums, [](const std::string& left, const std::string& right) {
      if (left[0] == '-' && right[0] != '-') return true;
      if (left[0] != '-' && right[0] == '-') return false;
      if (left[0] == '-' && right[0] == '-') {
        if (left.length() > right.length()) return true;
        if (left.length() < right.length()) return false;
        for (int i = 1; i < left.length(); i++) {
          if (left[i] > right[i]) return true;
          if (left[i] < right[i]) return false;
        }
        return false; // exception thrown when true
      }
      if (left.length() < right.length()) return true;
      if (left.length() > right.length()) return false;
      for (int i = 0; i < left.length(); i++) {
        if (left[i] < right[i]) return true;
        if (left[i] > right[i]) return false;
      }
      return false; // exception thrown when true
    });
    for (const std::string n: numbers) std::cout << n << '\n';
  }
  return 0;
}
