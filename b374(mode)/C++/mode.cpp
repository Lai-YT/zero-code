#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

typedef std::pair<int, int> Pair;
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int num_of_nums;
  while (cin >> num_of_nums) {
    std::vector<Pair> record;
    int number;
    for (int i = 0; i < num_of_nums; i++) {
      cin >> number;
      bool in = false;
      for (Pair & n: record) {
        if (n.first == number) {
          n.second += 1;
          in = true;
          break;
        }
      }
      if (!in) record.push_back(make_pair(number, 1));
    }
    sort(record.begin(), record.end(), [](Pair former, Pair latter) {
      if (former.second != latter.second) return former.second > latter.second;
      return former.first < latter.first;
    });
    int m = record[0].second;
    for (Pair n: record) {
      if (n.second == m) cout << n.first << ' ' << m << '\n';
      else break;
    }
  }
  return 0;
}
