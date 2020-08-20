#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

inline bool is_even(int n) {
  return n % 2? false: true;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int num_of_runners;
  while (cin >> num_of_runners) {
    int runner_num;
    double score;
    vector<pair<int, double> > runners;
    for (int i = 0; i < num_of_runners; i++) {
      cin >> runner_num >> score;
      runners.push_back(pair<int, double>(runner_num, score));
    }
    sort(runners.begin(), runners.end(), [](pair<int, double> runner_1, pair<int, double> runner_2) {
      return runner_1.second < runner_2.second;
    });
    int num_of_teams = num_of_runners%8?num_of_runners/8+1:num_of_runners/8;
    vector<vector<pair<int, double> > > teams(num_of_teams);
    for (int i = 0; i < num_of_runners; i++) {
      if (is_even(i / num_of_teams)) teams.at(i % num_of_teams).push_back(runners.at(i));
      else teams.at(num_of_teams - 1 - i % num_of_teams).push_back(runners.at(i));
    }
    for (int i = 0; i < num_of_teams - 1; i++) {
      vector<pair<int, double> > team = teams.at(i);
      cout << i+1 << ' ' << team.at(6).first << ' ' << team.at(4).first << ' ' << team.at(2).first << ' ' << team.at(0).first << ' ' << team.at(1).first << ' ' << team.at(3).first << ' ' << team.at(5).first << ' ' << team.at(7).first << '\n';
    }
    vector<pair<int, double> > team = teams.at(num_of_teams - 1);
    cout << num_of_teams << ' ';
    int s = team.size();
    if (is_even(s)) {
      for (int i = s - 2; i >= 0; i -= 2) std::cout << team.at(i).first << ' ';
      for (int i = 1; i < s; i += 2) std::cout << team.at(i).first << ' ';
    } else {
      for (int i = s - 1; i >= 0; i -= 2) std::cout << team.at(i).first << ' ';
      for (int i = 1; i < s; i += 2) std::cout << team.at(i).first << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}
