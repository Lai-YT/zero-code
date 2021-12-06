#include <cctype>
#include <iostream>
#include <string>


int main(int argc, char const *argv[]) {
  std::string sentence = "";

  while (std::getline(std::cin, sentence)) {
    /* add an extra non-alphabetic char to make sure the last word iss counted */
    sentence.push_back('-');
    
    int word_count = 0;
    bool in_word = false;
    for (const char c : sentence) {
      if (isalpha(c)) {
        in_word = true;
      } else {
        if (in_word) {
          ++word_count;
        }
        in_word = false;
      }
    }
    std::cout << word_count << '\n';
    sentence.clear();
  }
  return 0;
}
