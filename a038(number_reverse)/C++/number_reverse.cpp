#include <algorithm>
#include <iostream>
#include <string>


int main(int argc, char const *argv[]) {

  std::string line = "";
  while (std::cin >> line) {
    /*
     * Since the index of std::string start from the MSB of a number,
     * reverse first so the reverse_itr is not required,
     * which is more straight forward.
     */
    std::reverse(line.begin(), line.end());

    auto begin_itr = line.cbegin();
    for (; begin_itr != line.cend() && *begin_itr == '0'; ++begin_itr);

    std::cout << (
      begin_itr == line.cend() ? "0" : std::string(begin_itr, line.cend())
    ) << '\n';
  }
  return 0;
}
