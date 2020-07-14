#include <iostream>

bool can_be_palindrome(std::string sentence) {
  for (auto &word: sentence) {
    word = toupper(word);
  }
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
          return false;
        }
      }
    }
  }
  return true;
}


int main(void) {
  std::string sentence;
  while (std::cin >> sentence) {

    if (can_be_palindrome(sentence)) {
      std::cout << "yes !" << '\n';
    } else {
      std::cout << "no..." << '\n';
    }

  }

  return 0;
}
