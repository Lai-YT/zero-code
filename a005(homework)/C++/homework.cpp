#include <iostream>

int main(void) {
  int number_of_sequences;
  std::cin >> number_of_sequences;
  for(int i = 0; i < number_of_sequences; i++) {
    double sequence[4];
    std::cin >> sequence[0] >> sequence[1] >> sequence[2] >> sequence[3];
    if((sequence[1]/sequence[0] == sequence[2]/sequence[1]) && (sequence[2]/sequence[1] == sequence[3]/sequence[2])) {
      for(int i = 0; i < 4; i++) {
        std::cout <<  sequence[i] << " ";
      }
      std::cout << sequence[3]*(sequence[3]/sequence[2]) << '\n';
    } else if((sequence[1]-sequence[0] == sequence[2]-sequence[1]) && (sequence[2]-sequence[1] == sequence[3]-sequence[2])) {
      for(int i = 0; i < 4; i++) {
        std::cout <<  sequence[i] << " ";
      }
      std::cout << sequence[3]+(sequence[3]-sequence[2]) << '\n';
    } else {
      std::cout << "Neither arithmetic progression nor geometric progression" << '\n';
    }

  }
  return 0;
}
