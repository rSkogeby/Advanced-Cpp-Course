#include <iostream>
#include <vector>

class Test{
private:
  int one{1};
  int two{2};

public:
  void run() {
    int three{3};
    int four{4};
  // Capturing this allows use of private variables in lambda
    auto pLambda = [three,this,four](){
      std::cout << three << std::endl;
      std::cout << four << std::endl;    
      std::cout << one << std::endl;    
      std::cout << two << std::endl;    

    };
    pLambda();
  }

};

int main() {
  Test test;
  test.run();
  return 0;
}
