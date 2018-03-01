//#include <>
#include "E_Complex.h"

using namespace caveofprogramming;

int main() {
  Complex c1(1,2);
  Complex c2(2,1);
  Complex c3;
  c3 = c1+c2;
  std::cout << 4.1+c1+c2+c3+4 << std::endl;

  return 0;
}
