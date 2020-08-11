#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int number_of_students;
  while (std::cin >> number_of_students) {
    int score;
    std::vector<int> fail, pass;
    for (int s = 0; s < number_of_students; s++) {
      std::cin >> score;
      if (score >= 60) pass.push_back(score);
      else fail.push_back(score);
    }
    std::sort(fail.begin(), fail.end());
    std::sort(pass.begin(), pass.end());

    if (fail.size() == 0) {
      for (int i = 0; i < pass.size()-1; i++) std::cout << pass.at(i) << ' ';
      std::cout << pass.back() << '\n' << "best case\n" << pass.front() << '\n';
    }
    else if (pass.size() == 0) {
      for (int i = 0; i < fail.size()-1; i++) std::cout << fail.at(i) << ' ';
      std::cout << fail.back() << '\n' << fail.back() << '\n' << "worst case\n";
    }
    else {
      for (int s: fail) std::cout << s << ' ';
      for (int i = 0; i < pass.size()-1; i++) std::cout << pass.at(i) << ' ';
      std::cout << pass.back() << '\n' << fail.back() << '\n' << pass.front() << '\n';
    }
  }
  return 0;
}
