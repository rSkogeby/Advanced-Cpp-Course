#include <iostream>
#include <vector>
#include <initializer_list> // Allows initializing in {}

class Test {
private:
public:
  Test(std::initializer_list<std::string> texts) {
    for(auto v : texts){
      std::cout << v << std::endl;
    }
  }
  void print(std::initializer_list<std::string> texts) {
    for(auto v : texts){
      std::cout << v << std::endl;
    }
  }
};

int main() {
  std::vector<int> numbers{1,3,4,6};
  std::cout << numbers[2] << std::endl;
  Test test{"apple","orange","banana"};
  test.print({"one","two"});
  return 0;
}
