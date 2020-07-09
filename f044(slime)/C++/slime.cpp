#include <iostream>
#include <cmath>

int main(void) {

  int kingSlime, smallSlime;
  std::cin >> kingSlime >> smallSlime;

  int total = 1 + smallSlime/kingSlime;
  
  // int days = 0;
  // while(total != 1) {
  //   total /= 2;
  //   days++;
  // }
  // std::cout << days << '\n';

  std::cout << log2(total) << '\n';

  return 0;
}
