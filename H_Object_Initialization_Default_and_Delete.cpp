#include <iostream>
#include <vector>
#include <initializer_list> // Allows initializing in {}

class Test {
private:
  int id{3};
  std::string name{"Mike"};
public:
  Test() = default;
  Test(const Test& other) = delete;
  Test& operator=(const Test& other) = default;
  Test(int id) : id(id) {

  }
  void print() {
    std::cout << id << ": " << name << std::endl;
  }
};

int main() {
  Test test;
  test.print();

  Test test1(77);
  test1.print();

  Test test2;
  //Test test2 = test1; // Doesn't work because delete after copy-constructor
  test2 = test1;
  return 0;
}
