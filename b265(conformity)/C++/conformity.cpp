#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
typedef pair<string, int> Pair;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int people;
  while (cin >> people) {
    if (people == 0) break;
    map<string, int> combinations;
    string course[5];
    for (int i = 0; i < people; i ++) {
      cin >> course[0] >> course[1] >> course[2] >> course[3] >> course[4];
      sort(course, course + 5);
      string comb = "";
      for (string c: course) comb += c;
      combinations[comb] += 1;
    }
    vector<Pair> c;
    for (auto comb: combinations) {
      c.push_back(make_pair(comb.first, comb.second));
    }
    sort(c.begin(), c.end(), [](Pair former, Pair latter) {
      return former.second > latter.second;
    });
    int num_of_student = 0, best = c[0].second;
    for (Pair comb: c) {
      if (comb.second == best) num_of_student += best;
      else break;
    }
    cout << num_of_student << '\n';
  }
  return 0;
}
