#include <cstdio>
#include <iostream>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define DRAWLINE(point_1, point_2) { \
  if (point_1[0] != point_2[0]) { \
    int start = MIN(point_1[0], point_2[0]); \
    int end   = MAX(point_1[0], point_2[0]); \
    for (int i = start; i <= end; ++i) { \
      lines[i][point_1[1]] = '*'; \
    } \
  } else { \
    int start = MIN(point_1[1], point_2[1]); \
    int end   = MAX(point_1[1], point_2[1]); \
    for (int i = start; i <= end; ++i) { \
      lines[point_1[0]][i] = '*'; \
    } \
  } \
}


int main(int argc, char const *argv[]) {
  int n = 0, m = 0;
  while (std::cin >> n >> m) {
    char lines[n + 2][n + 3];

    // set the upper and lower bound
    for (size_t i = 0; i < n + 2; ++i) {
      lines[0][i] = '-';
      lines[n + 1][i] = '-';
    }
    lines[0][n + 2] = '\0';
    lines[n + 1][n + 2] = '\0';

    // initialization and set side bound
    for (int i = 1; i <= n; ++i) {
      for (int j = 0; j < n + 2; ++j) {
        lines[i][j] = ' ';
      }
      lines[i][0] = '|';
      lines[i][n + 1] = '|';
      lines[i][n + 2] = '\0';
    }

    // {x, y}
    int point_1[2] = {0}, point_2[2] = {0};
    if (m >= 2) {
      std::cin >> point_1[0] >> point_1[1];
      std::cin >> point_2[0] >> point_2[1];

      DRAWLINE(point_1, point_2);
      m -= 2;
    }

    while (m--) {
      point_1[0] = point_2[0];
      point_1[1] = point_2[1];
      std::cin >> point_2[0] >> point_2[1];

      DRAWLINE(point_1, point_2);
    }

    // print the lines
    for (int i = 0; i < n + 2; i++) {
      puts(lines[i]);
    }

  }  // cin while

  return 0;
}
