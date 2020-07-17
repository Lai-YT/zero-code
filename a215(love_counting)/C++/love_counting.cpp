#include <iostream>

int main(void) {
  int start, goal;
  while (std::cin >> start >> goal) {
    int sum = 0, count = 0;
    do {
      sum += start;
      start++;
      count++;
    } while (sum <= goal);
    std::cout << count << '\n';
  }

  return 0;
}
