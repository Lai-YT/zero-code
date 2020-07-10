#include <iostream>
#include <algorithm>

int main(void) {
  int length;
  while(std::cin >> length) {
    int numbers[length];
    for(int i = 0; i < length; i++) {
      std::cin >> numbers[i];
    }
    std::sort(numbers, numbers+length);
    bool consecutive = true;
    for(int i = 0; i < length-1; i++) {
      if(numbers[i] + 1 != numbers[i+1]) {
        consecutive = false;
      }
    }
    std::cout << numbers[0] << " " << numbers[length-1] << " ";
    if(consecutive) {
      std::cout << "yes" << '\n';
    } else {
      std::cout << "no" << '\n';
    }
  }

  return 0;
}
