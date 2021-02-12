#include <iostream>
#include <sstream>
#include <string>
#include <map>

inline int sod(int n) {
  int sum = 0;
  while (n / 10) {
    sum += n % 10;
    n /= 10;
  }
  return sum + n % 10;
}

inline int fun(int a, int b) {
  int ans = 0;
  int cnt;
  for (int i = a; i <= b; ++i) {
    cnt = 0;
    for (int j = 1; j <= i; ++j) {
      if (j + sod(j) == i) {
        ++cnt;
      }
    }
    if (!cnt) {
      ++ans;
    }
  }
  return ans;
}

inline int fun(int a) {
  for (int i = 1; i <= a; ++i) {
    if (i + sod(i) == a) {
      return i;
    }
  }
  return -1;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_case;
  std::cin >> num_of_case;
  std::map<int, int> table_1;
  std::map<std::string, int> table_2;
  std::stringstream ss;
  std::cin.ignore();
  for (size_t i = 0; i < num_of_case; ++i) {
    std::string input = "";
    std::getline(std::cin, input);
    ss << input;
    int par[2] = {0};
    int par_num = 0;
    for (size_t j = 0; j < 2; j++) {
      if (ss >> par[j]) {
        par_num++;
      }
    }
    int result = 0;
    if (par_num == 1) {
      if (table_1.find(par[0]) != table_1.end()) {
        result = table_1[par[0]];
      } else {
        result = fun(par[0]);
        table_1[par[0]] = result;
      }
    } else {
      std::string x = std::to_string(par[0]),
                  y = std::to_string(par[1]);
      if (table_2.find(x + y) != table_2.end()) {
        result = table_2[x + y];
      } else if (table_2.find(y + x) != table_2.end()) {
        result = table_2[y + x];
      } else {
        result = fun(par[0], par[1]);
        table_2[x + y] = result;
      }
    }
    std::cout << "Case " << i + 1 << ": " << result << '\n';
    ss.str("");
    ss.clear();
  }
  return 0;
}
