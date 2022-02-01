#include <iostream>
#include <sstream>
#include <string>
#include <vector>


inline void OptimizeIo() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
}


inline void RefreshStringStream(std::stringstream& ss) {
  ss.str(std::string{});
  ss.clear();
}


void GetNumbersFromStream(std::stringstream& ss, std::vector<int>& nums) {
  int buf{};
  while (ss >> buf) {
    nums.push_back(buf);
  }
}


int Gcd(int a, int b) {
  while (b) {
    int t = b;
    b = a % b;
    a = t;
  }
  return a;
}


int GetMaxGcdOfCombinationPairs(const std::vector<int>& nums) {
  int curr_max = 1;
  for (size_t i = 0; i < nums.size(); ++i) {
    for (size_t j = i + 1; j < nums.size(); ++j) {
      int gcd = Gcd(nums.at(i), nums.at(j));
      if (gcd > curr_max) {
        curr_max = gcd;
      }
    }
  }
  return curr_max;
}


int main(int argc, char const *argv[]) {
  OptimizeIo();

  std::stringstream ss{};
  std::string line{};
  /*
   * get number of case
   */
  std::getline(std::cin, line);
  ss.str(line);
  int num_of_case{};
  ss >> num_of_case;
  RefreshStringStream(ss);

  std::vector<int> nums;
  nums.reserve(100);  /* maximum size said by the problem */

  /*
  * process on each line of numbers
  */
  while (num_of_case--) {
    std::getline(std::cin, line);
    ss.str(line);

    GetNumbersFromStream(ss, nums);
    RefreshStringStream(ss);

    int curr_max = GetMaxGcdOfCombinationPairs(nums);
    nums.clear();

    std::cout << curr_max << '\n';
  }

  return 0;
}
