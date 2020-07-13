#include <iostream>

int main(void) {
  int num_of_nums;
  while (std::cin >> num_of_nums) {
    int buckets[3] = {0};
    for(int i = 0; i < num_of_nums; i++) {
      int num;
      std::cin >> num;
      buckets[num % 3]++;

    }
    for(int i = 0; i < buckets[1]; i++) {
      std::cout << "1 ";
    }
    for(int i = 0; i < buckets[2]; i++) {
      std::cout << "2 ";
    }
    for(int i = 0; i < buckets[0]; i++) {
      std::cout << "3 ";
    }
    std::cout << '\n';
  }

  return 0;
}
