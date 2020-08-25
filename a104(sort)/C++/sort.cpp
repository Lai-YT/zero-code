#include <iostream>
#include <vector>

typedef std::vector<int> Vector;

Vector merge(Vector const & a, Vector const & b) {
  int la = a.size(), lb = b.size();
  int i(0), j(0), k(0);
  Vector sorted(la + lb);
  while (i < la && j < lb) {
    if (a.at(i) < b.at(j)) sorted.at(k++) = a.at(i++);
    else sorted.at(k++) = b.at(j++);
  }
  while (i < la) sorted.at(k++) = a.at(i++);
  while (j < lb) sorted.at(k++) = b.at(j++);
  return sorted;
}

Vector merge_sort(Vector const & numbers) {
  int len = numbers.size();
  if (len <= 1) return numbers;
  return merge(merge_sort(Vector(numbers.begin(), numbers.begin() + len/2)),
               merge_sort(Vector(numbers.begin() + len/2, numbers.end())));
}


int main(void) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_nums;
  while (std::cin >> num_of_nums) {
    Vector numbers(num_of_nums);
    for (int i = 0; i < num_of_nums; i++) {
      std::cin >> numbers.at(i);
    }
    Vector sorted(merge_sort(numbers));
    for (int n : sorted) {
      std::cout << n << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}
