#include <cstdio>

inline unsigned int readuint() {
  unsigned int a = 0;
  char c = '0';
  while (c >= '0' && c <= '9') {
    a = (a << 3) + (a << 1) + c - '0';
    c = getchar_unlocked();
  }
  return a;
}

inline void writeuint(unsigned int d) {
  if (d == 0) {
    putchar_unlocked(48);
    return;
  }
  int len = 0;
  char n[20];
  while (d > 0) {
    n[len] = d % 10 + 48;
    len++;
    d /= 10;
  }
  for (int i = len - 1; i >= 0; i--) putchar_unlocked(n[i]);
}

int main(void) {
  unsigned int a, b;
  while ((a = readuint()) && (b = readuint())) {
    writeuint(a + b);
    putchar_unlocked('\n');
  }
  // ios_base::sync_with_stdio(false);
  // cin.tie(0);
  //
  // unsigned int a, b;
  // while (cin >> a >> b) {
    //   cout << a + b << '\n';
    // }

  return 0;
}
