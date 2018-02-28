//#include <>
#include <iostream>

class Test {
private: 
  int id;
  std::string name;

public:
  Test() : id(0), name("") {}
  Test(int id, std::string name) : id(id), name(name) {}
  void print() {
    std::cout << id << ": " << name << std::endl;
  }

  Test& operator=(const Test& other) {
    this->name = other.name;
    return *this;
  }
  
  Test(const Test& other) {
    this->id = other.id;
    this->name = other.name;
  }

};

int main() {
  Test test1(10,"Mike");
  test1.print();

  Test test2(20,"Bob");

  test2 = test1;
  test2.print();

  std::cout << std::endl;

  // Copy initialization, does not use assignment operator
  // Uses copy constructor
  /*
    RULE OF 3 in C++
    if you define a 
      1. Copy constructor
      2. Assignment operator
      3. Destructor
    implement the other two as well
    Destructor because risk of getting void pointers etc.
  */
  Test test4 = test1;
  test4.print();

  return 0;
}
