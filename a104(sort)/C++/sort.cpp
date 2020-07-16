#include <iostream>
#include <algorithm>

int main(void) {
  int num_of_nums;
  while (std::cin >> num_of_nums) {
    int numbers[num_of_nums];
    for (int i = 0; i < num_of_nums; i++) {
      std::cin >> numbers[i];
    }
    for (int i = 0; i < num_of_nums - 1; i++) {
      for (int j = 0; j < num_of_nums - i - 1; j ++) {
        if (numbers[j] > numbers[j + 1]) {
          std::swap(numbers[j], numbers[j + 1]);
        }
      }
    }
    for (int i = 0; i < num_of_nums; i++) {
      std::cout << numbers[i] << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}
