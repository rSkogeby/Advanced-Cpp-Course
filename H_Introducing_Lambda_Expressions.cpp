#include <iostream>
#include <vector>

void test1() {
  return [](){}();
}


void test( void (*pFunc)() ) {
  pFunc();
}

int main() {
  auto func = [](){ std::cout << "Hello" << std::endl;  };
  func();
 
  test([](){});
  test(func);
  test([](){ std::cout << "Hello" << std::endl;  });
  return 0;
}
