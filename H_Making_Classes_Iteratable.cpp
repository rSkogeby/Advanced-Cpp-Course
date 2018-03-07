#include "ring.h"
// Nested template classes
// Ring nested class
// Cycle buffer



int main() {
  ring<std::string> textring(3);

  textring.add("One");
  textring.add("Two");
  textring.add("Three");
  textring.add("Four");

  // C++98 style
  for(int i = 0; i < textring.size(); ++i) {
    std::cout << textring.get(i) << std::endl;
  }

  // C++11 style
  for(auto v : textring) {
    std::cout << v << std::endl;
  }

  return 0;
}
