#include <iostream>
#include <string>
#include <unordered_map>


void OptimizeIo() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
}


void PrintCountryOfCase(const std::string& country, const int case_no) {
  std::cout << "Case " << case_no << ": " << country << '\n';
}


int main(int argc, char const *argv[]) {
  OptimizeIo();

  const std::unordered_map<std::string, std::string> HELLO_OF_COUNTRIES = {
    {"HELLO", "ENGLISH"},
    {"HOLA", "SPANISH"},
    {"HALLO", "GERMAN"},
    {"BONJOUR", "FRENCH"},
    {"CIAO", "ITALIAN"},
    {"ZDRAVSTVUJTE", "RUSSIAN"},
  };

  std::string line{};
  for (size_t i = 1;
       std::cin >> line && line != "#";
       ++i) {
    const auto country_iter = HELLO_OF_COUNTRIES.find(line);

    PrintCountryOfCase(
      country_iter == HELLO_OF_COUNTRIES.cend()
          ? "UNKNOWN" : country_iter->second,
      i
    );
  }

  return 0;
}
