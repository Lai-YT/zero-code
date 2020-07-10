#include <iostream>

int main(int argc, char const *argv[]) {

  int lucky_number[3], number[5], money[5];
  while (true) {
    std::cin >> lucky_number[0] >> lucky_number[1] >> lucky_number[2];
    std::cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4];
    std::cin >> money[0] >> money[1] >> money[2] >> money[3] >> money[4];

    int total = 0;
    bool match = false;
    for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 5; j++) {
        if(lucky_number[i] == number[j]) {
          total += money[j];
        }
      }
    }
    // third lucky number
    for(int i = 0; i < 5; i++) {
      if(lucky_number[2] == number[i]) {
        match = true;
        total -= money[i];
      }
    }
    if(!match) {
      total *= 2;
    }
    if(total < 0) {
      total = 0;
    }
    std::cout << total << '\n';
  }


  return 0;
}
