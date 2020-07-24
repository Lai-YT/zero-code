#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int m, n;
  while (cin >> m >> n) {
    map<string, int> sub;
    string ribbon[n];
    string color;
    int beauty = 0;
    for (int i = 0; i < m; i++) {
      cin >> ribbon[i];
      sub[ribbon[i]] += 1;
    }
    if (sub.size() == m) beauty++;
    for (int i = m; i < n; i++) {
      if (sub[ribbon[i - m]] > 1) sub[ribbon[i - m]] -= 1;
      else sub.erase(ribbon[i - m]);
      cin >> ribbon[i];
      sub[ribbon[i]] += 1;
      if (sub.size() == m) beauty++;
    }
    cout << beauty << '\n';
  }
  return 0;
}
