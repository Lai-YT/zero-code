#include <chrono>
#include <ctime>
#include <iostream>
#include <thread>


int main(int argc, char const *argv[]) {

  switch (std::time(nullptr) % 10) {
    case 0:
    case 1:
      std::cout << "Hello, World!" << '\n';
      break;
    case 2:
    case 3:
      std::cout << "hello, world" << '\n';
      break;
    case 4:
    case 5:
      std::cout << "Halo, word!!!" << '\n';
      break;
    case 6:
    case 7:
      std::cout << "世界，您好！" << '\n';
      break;
    case 8:
    case 9:
      std::cout << "https://zerojudge.tw/ShowProblem?problemid=a001" << '\n';
      break;
    default:
      break;
  }
  std::this_thread::sleep_for(std::chrono::seconds(2));

  return 0;
}
