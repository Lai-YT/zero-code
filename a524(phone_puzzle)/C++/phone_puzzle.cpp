#include <iostream>
#include <vector>


void TryNextPassword(const int num_of_digit,
                     std::vector<bool>& unuse_digit, std::vector<int>& password,
                     const int prev_try, const int pos) {
  password.at(pos) = prev_try;
  unuse_digit.at(prev_try) = false;
  if (pos == num_of_digit - 1) {
    for (int word : password) {
      std::cout << word;
    }
    std::cout << '\n';
    return;
  }
  for (int i = num_of_digit; i > 0; --i) {
    if (unuse_digit.at(i)) {
      TryNextPassword(num_of_digit, unuse_digit, password, i, pos + 1);
      unuse_digit.at(i) = true;
    }
  }
  return;
}


int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  
  int num_of_digit = 0;
  std::vector<int> password;
  while (std::cin >> num_of_digit) {
    password.resize(num_of_digit);

    // won't use at(0)
    std::vector<bool> unuse_digit(num_of_digit + 1, true);
    for (int i = num_of_digit; i > 0; --i) {
      TryNextPassword(num_of_digit, unuse_digit, password, i, 0);
      unuse_digit.at(i) = true;
    }
  }

  return 0;
}
