#include <iostream>
// #include <algorithm>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  std::string str;
  while (std::cin >> str) {
    int len = str.length();
    while (len--) {
      std::cout << str << '\n';
      str.push_back(str.at(0));
      str.erase(str.begin());
      /* another way to rotate */
      // std::reverse(str.begin()+1, str.end());
      // std::reverse(str.begin(), str.end());
    }
  }
  return 0;
}
