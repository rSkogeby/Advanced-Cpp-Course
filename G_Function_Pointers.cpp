#include <iostream>

void test() {
  std::cout << "Hello, World!" << std::endl;
}

double test2(std::string s,int i) {
  switch(s[0]){
    case 'C':
      return (double) i/3;
    default: 
      return 42.33;
  }
}

int main() {
  test();

  void (*pTest)() = test;

  pTest();

  double (*pTest2)(std::string,int) = test2;
  
  std::cout << pTest2("Candy",83) << std::endl;
  
  return 0;
}
