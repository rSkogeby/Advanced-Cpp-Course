//#include <>
#include "E_Complex.h"

using namespace caveofprogramming;

int main() {
  Complex num(3,4); // Constructor
  num.print();
  Complex num2 = num; // Copy constructor
  Complex num3;
  num3 = num; // Overloaded assignment operator
  return 0;
}
