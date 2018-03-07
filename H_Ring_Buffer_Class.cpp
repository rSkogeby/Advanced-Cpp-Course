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

  for(int i = 0; i < textring.size(); ++i) {
    std::cout << textring.get(i) << std::endl;
  }

  return 0;
}
