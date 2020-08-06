#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
  int num_of_problems, num_of_students, correct;
  while(scanf("%d\n", &num_of_problems) != EOF) {
    char correct_answer[num_of_problems], answer;
    int i = 0;
    while ((correct_answer[i++] = getchar()) != '\n') {}
    scanf("%d\n", &num_of_students);
    bool shrt = false;
    for (int student = 0; student < num_of_students; student++) {
      correct = 0;
      for (int j = 0; j < num_of_problems; j++) {
        if ((answer = getchar()) == correct_answer[j]) correct++;
        else if (answer == '\n') {
          shrt = true;
          break;
        }
      }
      printf("%d\n", correct * 100 / num_of_problems);
      if (!shrt) while ((answer = getchar()) != '\n' && answer != EOF) {}
    }
  }
  return 0;
}
