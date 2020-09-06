#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

int main(void) {
  unsigned a, b, c;
  while (std::cin >> a >> b >> c) {
    std::vector<std::pair<unsigned, char> > vote(3);
    vote.at(0) = std::pair<unsigned, char>(a, 'A');
    vote.at(1) = std::pair<unsigned, char>(b, 'B');
    vote.at(2) = std::pair<unsigned, char>(c, 'C');
    std::sort(vote.begin(), vote.end());
    vote.at(1).first += vote.at(0).first;
    std::sort(vote.begin(), vote.end());
    std::cout << vote.at(2).second << '\n';
  }
  return 0;
}
