#include <iostream>
#include <memory>
#include <string>
#include <unordered_map>
#include <unordered_set>


void OptimizeIo();

void PrintStart();

void PrintEnd();

std::string ConvertToSoundex(const std::string &name);

void PrintNameAndSoundex(const std::string &name, const std::string &soundex);

std::unordered_map<char, char> InitCodeTable();


const std::unordered_set<char> SKIPPERS = {'A', 'E', 'I', 'O', 'U', 'Y', 'W', 'H'};
const std::unordered_map<char, char> CODE_TABLE = InitCodeTable();
const char FILLER = '0';
const int MAX_SOUNDEX_LENGTH = 4;

int main(int argc, char const *argv[]) {
  OptimizeIo();
  PrintStart();

  std::string name{};
  while (std::cin >> name) {
    std::string soundex = ConvertToSoundex(name);
    PrintNameAndSoundex(name, soundex);
  }
  
  PrintEnd();

  return 0;
}


void OptimizeIo() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
}


void PrintStart() {
  /* start at 10 and 35 */
  std::cout << "         NAME                     SOUNDEX CODE" << '\n';
}


void PrintEnd() {
  /* start at 20 */
  std::cout << "                  END OF OUTPUT" << '\n';
}


std::string ConvertToSoundex(const std::string &name) {
  /*
   * The first letter is special.
   * Put its code if has and replace back later;
   * otherwise, the letter itself.
   */
  std::string soundex{};
  const auto first_iter = CODE_TABLE.find(name.front());
  if (first_iter != CODE_TABLE.cend()) {
    soundex.push_back(first_iter->second);
  } else {
    soundex.push_back(name.front());
  }
  /* skippers can break consecutives */
  bool met_skipper = false;
  for (size_t i = 1; i < name.size() && soundex.size() < MAX_SOUNDEX_LENGTH; ++i) {
    const char letter = name.at(i);
    /* skip if is a skipper */
    if (SKIPPERS.find(letter) != SKIPPERS.cend()) {
      met_skipper = true;
      continue;
    }
    const auto iter = CODE_TABLE.find(letter);
    if (iter != CODE_TABLE.cend()) {
      const char code = iter->second;
      /* skip the consecutives */
      if (code == soundex.back() && !met_skipper) {
        continue;
      }
      /* add the new code */
      soundex.push_back(code);
      met_skipper = false;
    }
  }
  /* fill up to the max length */
  while (soundex.size() != MAX_SOUNDEX_LENGTH) {
    soundex.push_back(FILLER);
  }

  /* replace the first letter back */
  soundex.front() = name.front();

  return std::move(soundex);
}


void PrintNameAndSoundex(const std::string &name, const std::string &soundex) {
  int pos = 0;
  /* 9 leading spaces */
  std::cout << "         ";
  pos += 9;
  /* the name */
  std::cout << name;
  pos += name.size();
  /* the fill space up to 34 */
  while (pos != 34) {
    std::cout << ' ';
    ++pos;
  }
  /* the soundex */
  std::cout << soundex << '\n';
}


std::unordered_map<char, char> InitCodeTable() {
  std::unordered_map<char, char> table;
  for (const char c : {'B', 'P', 'F', 'V'}) {
    table.emplace(c, '1');
  }
  for (const char c : {'C', 'S', 'K', 'G', 'J', 'Q', 'X', 'Z'}) {
    table.emplace(c, '2');
  }
  for (const char c : {'D', 'T'}) {
    table.emplace(c, '3');
  }
  for (const char c : {'L'}) {
    table.emplace(c, '4');
  }
  for (const char c : {'M', 'N'}) {
    table.emplace(c, '5');
  }
  for (const char c : {'R'}) {
    table.emplace(c, '6');
  }
  return std::move(table);
}
