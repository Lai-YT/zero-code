#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int row, col, num_of_targets;
  while (cin >> row >> col >> num_of_targets) {
    vector< pair<char, pair<int, int> > > field;
    char target;
    for (int r = 0; r < row; r++) {
      for (int c = 0; c < col; c++) {
        cin >> target;
        if (target != '0') field.push_back(pair<char, pair<int, int> >(target, pair<int, int>(r, c)));
      }
    }
    if (field.size() < num_of_targets) {
      cout << "Mission fail." << '\n';
      continue;
    }
    sort(field.begin(), field.end());
    for (int t = 0; t < num_of_targets; t++) {
      pair<int, int> target = field.at(t).second;
      cout << target.first << ' ' << target.second << '\n';
    }
  }
  return 0;
}
