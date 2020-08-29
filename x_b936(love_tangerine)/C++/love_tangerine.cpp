#include <iostream>

typedef long long lint;

lint split(lint const & n, lint const & m) {
  if (n >> 1 <= m) return 1;
  if (n % 2) return split((n + 1) >> 1, m) + split((n - 1) >> 1, m);
  return split(n >> 1, m) << 1;
}

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  lint n, m;
  while (std::cin >> n >> m) {
    if (n < m) std::cout << "0\n";
    else std::cout << split(n, m) << '\n';
  }
  return 0;
}
