#include <cstdio>

int main(void) {
  long long total_score = 0, total_credit = 0;
  int score, credit;
  while (scanf("%d %d", &score, &credit) != EOF) {
    total_score += score * credit;
    total_credit += credit;
  }
  int score_average = total_score / total_credit;
  if (score_average >= 60)
    printf("Oh wow! You pass it!\n%d\n", score_average);
  else printf("YEEEEEE!!!\n");
  return 0;
}
