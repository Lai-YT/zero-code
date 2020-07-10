#include <iostream>

int main(void) {
  int amount;
  while(std::cin >> amount) {
    int correspond[3] = {0};
    for(int i = 0; i < amount; i++) {
      int number;
      std::cin >> number;
      correspond[number % 3]++;
    }
    std::cout << correspond[0] << " " << correspond[1] << " " << correspond[2] << '\n';
  }

  return 0;
}
