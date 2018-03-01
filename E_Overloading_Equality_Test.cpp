//#include <>
#include "E_Complex.h"
using namespace caveofprogramming;


int main() {
  Complex c1(2,2);
  Complex c2(2,1);
  if( c1 == c2) std::cout << "Equal" << std::endl;
  else std::cout << "Not Equal" << std::endl;
  if( c1 != c2) std::cout << "Not Equal" << std::endl;
  else std::cout << "Equal" << std::endl;
  return 0;
}
