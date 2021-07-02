#include <iostream>
#include <algorithm>
#include <vector>


bool result_exist = false;


void NextNumber(const std::vector<int>& numbers, std::vector<int>& choosed,
                const int target, const int cur_sum,
                const int pos, const int choose_pos) {
  if (cur_sum == target) {
    for (int i = 0; i < choose_pos; ++i) {
      std::cout << choosed.at(i) << ' ';
    }
    std::cout << '\n';
    result_exist = true;
    return;
  }

  for (int i = pos; i < numbers.size(); ++i) {
    if (numbers.at(i) > target - cur_sum) {
      break;
    }
    choosed.at(choose_pos) = (numbers.at(i));
    NextNumber(numbers, choosed, target, cur_sum + numbers.at(i), i + 1, choose_pos + 1);
  }
  return;
}


int main(int argc, char const *argv[]) {
  int num_of_nums, target;
  std::vector<int> numbers, choosed;

  while (std::cin >> num_of_nums >> target) {
    result_exist = false;
    numbers.resize(num_of_nums);
    choosed.resize(num_of_nums);

    for (int& n : numbers) {
      std::cin >> n;
    }
    std::sort(numbers.begin(), numbers.end());

    for (int i = 0; i < num_of_nums; ++i) {
      if (numbers.at(i) > target) {
        break;
      }
      choosed.at(0) = numbers.at(i);
      NextNumber(numbers, choosed, target, numbers.at(i), i + 1, 1);
    }

    if (!result_exist) {
      std::cout << -1 << '\n';
    }
  }
  return 0;
}
