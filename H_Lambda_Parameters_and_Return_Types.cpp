#include <iostream>
#include <vector>


void runDivide( double (*divide)(double a, double b) ) {
  std::cout << divide(9,3) << std::endl;
}
void testGreet( void (*greet)(std::string) ) {
  greet("BoB");
}

int main() {
  auto pGreet = [](std::string name){ std::cout << "Hello " << name << std::endl; };
  pGreet("Mike");
  testGreet(pGreet);

  auto pDivide = [](double a, double b) -> double{ 
    if ( b == 0.0 ) {
      return 0;
    }
    return a/b;  
  };
  auto frac = pDivide(10.0,5.0);
  std::cout << frac << std::endl;
  frac = pDivide(10.0,0);
  std::cout << frac << std::endl;

  runDivide(pDivide);
  return 0;
}
