#include <iostream>

int main(void) {
  std::string sentence;
  while (std::cin >> sentence) {
    for (auto &word: sentence) {
      word = toupper(word);
    }
    bool palindrome = true;
    bool mark = false;
    for (auto &word: sentence) {
      if((int) word >= 65 && (int) word <= 90) {
        int num_of_word = 0;
        for (auto check: sentence) {
          if (word == check) {
            num_of_word++;
          }
        }
        if (num_of_word % 2 != 0) {
          if (!mark) {
            word = 0;
            mark = true;
          } else {
            palindrome = false;
            break;
          }
        }
      }
    }
    if (palindrome) {
      std::cout << "yes !" << '\n';
    } else {
      std::cout << "no..." << '\n';
    }
  }

  return 0;
}
