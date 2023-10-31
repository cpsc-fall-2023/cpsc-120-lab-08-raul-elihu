// Raul Munoz
// raulmunoz@csu.fullerton.edu
// @raulmunoz0711
// Partners: @Elihu2027

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum{0};
  int count = static_cast<int>(arguments.size()) - 1;
  bool first{true};
  for (std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    } else {
      sum = sum + std::stod(argument);
    }
  }

  double average{0};
  average = sum / count;

  std::cout << "average = " << average << " \n ";

  return 0;
}
