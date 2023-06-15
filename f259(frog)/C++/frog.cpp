#include <iostream>
#include <set>
int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::string name;
  std::set<std::string> names;
  int prev_length = 0, curr_length = 0;
  while (std::getline(std::cin, name)) {
    names.insert(name);
    curr_length = names.size();
    if (curr_length != prev_length) std::cout << "0\n";
    else std::cout << "1\n";
    prev_length = curr_length;
  }
  return 0;
}
