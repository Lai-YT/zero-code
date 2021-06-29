#include <iostream>
#include <string>
#include <vector>

// depth first, exhaustive
void NextParenthesis(const int num_of_pair, std::string& parenthesis,
                     const int used_left, const int used_right,
                     const int pos) {
  // will be invalid if keep going
  if (used_left > num_of_pair || used_right > used_left) {
    return;
  }
  // Knowing that pos start from 1,
  // so when pos == num_of_pair * 2, we finish this current combination.
  if (pos == (num_of_pair << 1)) {
    std::cout << parenthesis << '\n';
    return;
  }

  // try 2 kinds of combination
  parenthesis.at(pos) = '(';
  NextParenthesis(num_of_pair, parenthesis, used_left + 1, used_right, pos + 1);
  parenthesis.at(pos) = ')';
  NextParenthesis(num_of_pair, parenthesis, used_left, used_right + 1, pos + 1);
  return;
}


int main(int argc, char const *argv[]) {
  int num_of_pair = 0;
  std::string parenthesis = "";
  // since we konw the max number of pair is 13
  while (std::cin >> num_of_pair) {
    parenthesis.resize(num_of_pair << 1);
    NextParenthesis(num_of_pair, parenthesis, 0, 0, 0);
    std::cout << '\n';
  }
  return 0;
}
