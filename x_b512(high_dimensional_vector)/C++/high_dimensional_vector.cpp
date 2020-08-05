#include <iostream>
#include <map>
#include <utility>
#include <sstream>

typedef std::pair<int, int> Pair;

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  std::stringstream lineGetter;
  std::string line;
  while(std::getline(std::cin, line)) {
    lineGetter << line;
    int pos, value;
    char colon;
    std::map<int, int> vector;
    while (lineGetter >> pos >> colon >> value) {
      vector.insert(Pair(pos, value));
    }
    int inner_product = 0;
    lineGetter.str("");
    lineGetter.clear();
    std::getline(std::cin, line);
    lineGetter << line;
    while (lineGetter >> pos >> colon >> value) {
      if (vector.count(pos)) inner_product += value * vector[pos];
    }
    std::cout << inner_product << '\n';
    lineGetter.str("");
    lineGetter.clear();
  }
  return 0;
}
