//#include <>
#include "E_Complex.h"
using namespace caveofprogramming;


int main() {
  Complex c1(2,2);
  Complex c2(2,1);
  std::cout << *c1+*Complex(4,3) << std::endl;

  return 0;
}
