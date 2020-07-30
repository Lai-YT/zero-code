#include <iostream>
#include <iomanip>

using namespace std;

double round(double n) {
  bool is_nagative = false;
  if (n < 0) {
    is_nagative = true;
    n *= -1;
  }
  double rounded;
  int check = int(n * 1000) % 10;
  if (check >= 5) rounded = (int)(n * 100 + 1) / 100.0f;
  else rounded = (int)(n * 100) / 100.0f;
  if (is_nagative) return -rounded;
  return rounded;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  while (cin >> n) {
    double m, p, profit_rate;
    for (int i = 0; i < n; i++) {
      cin >> m >> p;
      profit_rate = (p - m) * 100 / m;
      if (profit_rate >= 10 || profit_rate <= -7)
        cout << fixed << setprecision(2) << round(profit_rate) << "% dispose" << '\n';
      else cout << fixed << setprecision(2) << round(profit_rate) << "% keep" << '\n';
    }
  }
  return 0;
}
