#include <iostream>

int main(void) {
  std::string sentence;
  while(std::cin >> sentence) {
    for(int i = 0; i < sentence.size(); i++) {
      sentence[i] -= 7;
      std::cout << sentence[i];
    }
    std::cout << '\n';
  }

  return 0;
}
