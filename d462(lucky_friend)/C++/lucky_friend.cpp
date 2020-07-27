#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

string multiply(string a, string b) {
  int result[1000000] = {0};
  for (int i = 0; i < b.length(); i++) {
    if (b[i] == '0') continue;
    for (int j = 0; j < a.length(); j++) {
      result[i + j] += ((int)a[j] - 48) * ((int)b[i] - 48);
    }
  }
  for (int i = 0; i < a.length() + b.length(); i++) {
    result[i + 1] += result[i] / 10;
    result[i] %= 10;
  }
  int len = a.length() + b.length();
  for (int i = len - 1; i > 0; i--) {
    if (result[i] == 0) len--;
    else break;
  }
  string product = "";
  for (int i = 0; i < len; i++) product += to_string(result[i]);
  return product;
}

string power(string a, string b) {
  int p = stoi(b);
  while (p % 2 == 0) {
    a = multiply(a, a);
    p /= 2;
  }
  string result = a;
  for (int i = 0; i < p - 1; i++) {
    result = multiply(result, a);
  }
  reverse(&result[0], &result[0] + result.length());
  return result;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string a, n;
  int i, k;
  while (cin >> a >> n >> i >> k) {
    string result = power(a, n);
    if (result.length() >= i + k - 1)
      cout << result.substr(i - 1, k) << '\n';
    else cout << result.substr(i - 1) << '\n';
  }
  // int a, n, i, k;
  // while (cin >> a >> n >> i >> k) {
  //   string result = to_string(pow(a, n));
  //   if (result.length() >= i + k - 1)
  //     cout << result.substr(i - 1, k) << '\n';
  //   else cout << result.substr(i - 1) << '\n';
  // }
  return 0;
}
