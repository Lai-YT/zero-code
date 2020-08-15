#include <cstdio>
#include <string>
#include <stack>

int main(int argc, char const *argv[]) {
  int num_of_commands;
  char command;
  while (scanf("%d\n", &num_of_commands) != EOF) {
    std::stack<std::string> s;
    for (int i = 0; i < num_of_commands; i++) {
      command = getchar();
      if (command == '1') s.pop();
      else if (command == '2') printf("%d\n", std::stoi(s.top()));
      else {
        getchar();
        std::string n;
        while ((command = getchar()) != '\n') n += command;
        s.push(n);
        continue;
      }
      getchar();
    }
  }
  return 0;
}
