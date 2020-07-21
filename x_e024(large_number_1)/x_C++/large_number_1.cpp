// #include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// inline string readstr() {
//   string str = "";
//   char c;
//   while (c = getchar_unlocked()) {
//     if (c == ' ' || c == '\n') break;
//     str += c;
//   }
//   return str;
// }
//
// inline void writestr(string const &str) {
//   for (char s: str) putchar_unlocked(s);
// }

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
  reverse(&b[0], &b[0] + b.length());
  reverse(&a[0], &a[0] + a.length());
  int p = stoi(b);
  string result = a;
  for (int i = 0; i < p - 1; i++) {
    result = multiply(result, a);
  }
  reverse(&result[0], &result[0] + result.length());
  return result;
}


int main(int argc, char const *argv[]) {
  string a, b;
  // while (true) {
  //   a = readstr();
  //   b = readstr();
  //   if (a == "0" && b == "0") break;
  //   string result = power(a, b);
  //   writestr(result);
  //   putchar_unlocked('\n');
  // }
  while (cin >> a >> b) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if (a == "0" && b == "0") break;
    cout << power(a, b) << '\n';
  }
  return 0;
}
