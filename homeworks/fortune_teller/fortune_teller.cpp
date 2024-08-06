
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  using std::string_literals::operator""s;
  const std::unordered_map<std::string, std::string> season_map{
      {"spring", "STL guru"},
      {"summer", "C++ expert"},
      {"autumn", "coding beast"},
      {"winter", "software design hero"},
  };
  std::array endings{"eats UB for breakfast"s,
                     "finds errors quicker than the compiler"s,
                     "is not afraid of C++ error messages"s};
  std::cout << "Welcome to the fortune teller program!"s << std::endl;
  std::cout << "Please enter your name:"s << std::endl;
  std::string name;
  std::cin >> name;
  std::cout << "Please enter the time of year when you were born:"s
            << std::endl;
  std::cout << "(pick from 'spring', 'summer', 'autumn', 'winter')"s
            << std::endl;
  std::string season;
  std::cin >> season;
  std::cout << "Please enter an adjective:"s << std::endl;
  std::string adjective1;
  std::cin >> adjective1;
  std::cout << "Please enter another adjective:"s << std::endl;
  std::string adjective2;
  std::cin >> adjective2;
  std::array adjectives{adjective1, adjective2};
  int name_len_mod_2 = name.length() % 2;
  std::string actual_adjective = adjectives.at(name_len_mod_2);
  const std::string noun = season_map.at(season);
  const std::string ending = endings[endings.size() % 2];
  std::cout << std::endl
            << name << ", the "s << actual_adjective << " "s << noun << " that "s
            << ending << std::endl;
}
