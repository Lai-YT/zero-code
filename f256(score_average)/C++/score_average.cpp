#include <cctype>
#include <cstdio>

/*
 * 1. One cannot use the <iostream> library since the library itself can exceed the memory limit.
 * 2. This problem is hard only at the input optimization. We'll need getchar_unlocked to solve it.
 */

extern int getchar_unlocked(void);

inline int read(int* num) {
  *num = 0;
  char c = getchar_unlocked();
  if (c == EOF) {
    return EOF;
  }
  while (isdigit(c)) {
    *num = *num * 10 + c - '0';
    c = getchar_unlocked();
  }
  return 1;
}

int main(void) {
  long long total_score = 0;
  long long total_credit = 0;
  int score, credit;
  while (read(&score) != EOF && read(&credit) != EOF) {
    total_score += score * credit;
    total_credit += credit;
  }
  const int score_average = total_score / total_credit;
  if (score_average >= 60) {
    printf("Oh wow! You pass it!\n%d\n", score_average);
  } else {
    printf("YEEEEEE!!!\n");
  }
  return 0;
}
