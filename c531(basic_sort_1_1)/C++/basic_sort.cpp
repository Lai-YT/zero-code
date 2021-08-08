#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>


inline bool is_even(const int n) {
  return !(n % 2);
}

/*
 * a even more faster io can be achieved by using low-level techniques, such as getchar,
 * but stringstream is a clear and safe approach
 */

int main(int argc, char const *argv[]) {
  /* fast io */
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  std::vector<int> nums{};
  std::vector<int> evens{};
  /* at most 20 numbers, reserve first to speed up */
  nums.reserve(20);
  evens.reserve(20);

  /*
   * Since we don't konw how many numbers there are,
   * stringstream is used to get the whole line and parse them into integers.
   */
  std::string line = "";
  std::stringstream ss;
  while (std::getline(std::cin, line)) {
    ss << line;
    /* get the numbers and classify */
    int num = 0;
    while (ss >> num) {
      /* filter out the ',' */
      ss.get();
      nums.push_back(num);
      if (is_even(num)) {
        evens.push_back(num);
      }
    }
    /* sort the evens and decide which to output */
    std::sort(evens.begin(), evens.end());
    auto e_itr = evens.begin();
    for (int& n : nums) {
      std::cout << (is_even(n) ? *(e_itr++) : n);
      /* don't want a comma at the end */
      if (n != nums.back()) {
        std::cout << ',';
      }
    }
    std::cout << '\n';
    /* reset stringstream variable */
    ss.str("");
    ss.clear();
    /* reset vectors */
    nums.clear();
    evens.clear();
  }

  return 0;
}
