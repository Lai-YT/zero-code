#include <iostream>
#include <algorithm>
#include <vector>

class Website {
public:

  Website() {}

  Website(std::string web_name, int relativity)
    :web_name(web_name),relativity(relativity) {}


  std::string getWebName() {
    return web_name;
  }

  int getRelativity() {
    return relativity;
  }

private:
  std::string web_name;
  int relativity;
};


int main(void) {
  int num_of_cases;
  while (std::cin >> num_of_cases) {
    std::vector<std::vector<Website> > cases;
    for(int i = 0; i < num_of_cases; i++) {
      std::vector<Website> c;
      for(int j = 0; j < 10; j++) {
        std::string web;
        int relativity;
        std::cin >> web >> relativity;
        c.push_back(Website(web, relativity));
      }
      std::sort(c.begin(), c.end(), [](Website former, Website latter) {
        return former.getRelativity() < latter.getRelativity();
      });
      cases.push_back(c);
    }
    for(int i = 0; i < num_of_cases; i++) {
      std::cout << "Case #" << i+1 << ":"<< '\n';
      int best_relate = cases.at(i).at(9).getRelativity();
      for(int j = 0; j < 10; j++) {
        Website current = cases.at(i).at(j);
        if(current.getRelativity() == best_relate) {
          std::cout << current.getWebName() << '\n';
        }
      }
    }
  }

  return 0;
}
