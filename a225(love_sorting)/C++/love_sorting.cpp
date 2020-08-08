#include <iostream>
#include <algorithm>

int main(void) {
  int num_of_nums;
  while (std::cin >> num_of_nums) {
    int numbers[num_of_nums];
    for (int i = 0; i < num_of_nums; i++) {
      std::cin >> numbers[i];
    }

    std::sort(numbers, numbers + num_of_nums, [](int former, int latter) {
      if(former % 10 != latter % 10) return former % 10 < latter % 10;
      else return former / 10 > latter / 10;
    });
    
    for (int n: numbers) {
      std::cout << n << " ";
    }
    std::cout << '\n';
  }

  return 0;
}
