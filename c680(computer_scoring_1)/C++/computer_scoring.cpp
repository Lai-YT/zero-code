#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int num_of_problems, num_of_students, correct;
  string correct_answer, answer;
  while (cin >> num_of_problems) {
    cin >> correct_answer >> num_of_students;
    for (int student = 0; student < num_of_students; student++) {
      correct = 0;
      cin >> answer;
      for (int i = 0; i < (answer.length() > num_of_problems? num_of_problems: answer.length()); i++) {
        if (answer[i] == correct_answer[i]) correct++;
      }
      cout << correct * 100 / num_of_problems << '\n';
    }
  }
  return 0;
}
