#include <iostream>

int main(void) {
  int number = 0;
  while(std::cin >> number) {
    int score = 0;
    if(number < 0 || number > 100){
      break;
    }
    if(number <= 10){
      score = number * 6;
    }
    else if (number <= 20) {
      score = 60 + (number - 10) * 2;
    }
    else if (number <= 40) {
      score = 80 + (number - 20) * 1;
    }
    else {
      score = 100;
    }
    std::cout << score << '\n';
  }

  return 0;
}
