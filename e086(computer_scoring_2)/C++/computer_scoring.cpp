#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

typedef pair<string, string> subj_ans;
typedef pair<int, int> subj_score;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int num_of_subjects, num_of_students, student_number, int_subj_num;
  string subject_name, str_subject_num, answer, student_name, correct_answer;
  while (cin >> num_of_subjects >> num_of_students) {
    map<int, subj_ans> subjects;
    map<int, string> subj_num;
    map<int, string> roster;
    map<int, vector<subj_score> > stud_score;
    for (int subj = 0; subj < num_of_subjects; subj++) {
      cin >> str_subject_num >> subject_name >> answer;
      int_subj_num = stoi(str_subject_num);
      subjects.insert(make_pair(int_subj_num, subj_ans(subject_name, answer)));
      subj_num.insert(make_pair(int_subj_num, str_subject_num));
    }
    for (int student = 0; student < num_of_students; student++) {
      cin >> student_number >> student_name;
      roster.insert(make_pair(student_number, student_name));
      stud_score.insert(make_pair(student_number, vector<subj_score>()));
    }
    for (int ans = 0; ans < num_of_students * num_of_subjects; ans++) {
      cin >> student_number >> int_subj_num >> answer;
      int correct = 0;
      correct_answer = subjects[int_subj_num].second;
      for (int i = 0; i < (correct_answer.length() > answer.length()? answer.length(): correct_answer.length()); i++)
        if (answer[i] == correct_answer[i]) correct++;
      stud_score[student_number].push_back(subj_score(int_subj_num, correct * 100 / correct_answer.length()));
    }
    for (map<int, vector<subj_score> >::iterator itr = stud_score.begin(); itr != stud_score.end(); itr++)
      sort(itr->second.begin(), itr->second.end());
    for (int student = 1; student <= num_of_students; student++)
      for (int subject = 1; subject <= num_of_subjects; subject++)
        cout << setw(3) << setfill('0') << student << ',' << roster[student] << ',' << subj_num[subject] << ',' << subjects[subject].first << ',' << stud_score[student][subject-1].second << '\n';
  }
  return 0;
}
