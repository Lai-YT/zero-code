#include <iostream>

int main(void) {
  std::ios_base::sync_with_stdio(false);

  int length;
  while(std::cin >> length) {
    int number, max(0), min(0);
    std::cin >> number;
    min = max = number;
    for(int i = 1; i < length; i++) {
      std::cin >> number;
      if (number > max) max = number;
      else if (number < min) min = number;
    }
    std::cout << min << " " << max << " ";
    if((max - min) == (length - 1)) {
      std::cout << "yes\n";
    } else {
      std::cout << "no\n";
    }
  }

  return 0;
}
