#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int vertex, side;
  while (std::cin >> vertex >> side) {
    int side_about_vertex[vertex + 1] = {0};
    int a, b;
    while (side--) {
      std::cin >> a >> b;
      side_about_vertex[a]++;
      side_about_vertex[b]++;
    }
    int odd = 0;
    for (int s : side_about_vertex) {
      odd += s % 2;
      if (odd > 2) break;
    }
    if (odd != 0 and odd != 2) std::cout << "NO" << '\n';
    else std::cout << "YES" << '\n';
  }
  return 0;
}
