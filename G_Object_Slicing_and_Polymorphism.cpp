#include <iostream>
#include <algorithm>
#include <vector>

class Parent {
private:
  int one;
public:
  Parent(const Parent& other) : one(0) {
    std::cout << "Copy parent" << std::endl;
    this->one = other.one;
  }
  virtual void print() {
    std::cout << "parent" << std::endl;
  }
  Parent() : one(0) {}
  virtual ~Parent() {}
};

class Child : public Parent {
private:
  int two;
public:
  Child() : two(0) {}
  void print() {
    std::cout << "child" << std::endl;
  }
};

int main() {
  Child c1;
  Parent& p1 = c1;
  p1.print();

  std::cout << &p1 << " " << &c1 << std::endl;

  Parent p2 = Child();
  p2.print();

  return 0;
}
