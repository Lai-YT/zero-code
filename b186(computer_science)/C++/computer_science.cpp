#include <iostream>
#define min(a, b) (a < b ? a : b)

int main(void) {
  long long cookies, chocolates, cakes;
  while (std::cin >> cookies >> chocolates >> cakes) {
    chocolates += min(cookies / 10, cakes / 2);
    std::cout << cookies << " 個餅乾，" << chocolates << " 盒巧克力，" << cakes << " 個蛋糕。\n";
  }
  return 0;
}
