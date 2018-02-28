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
  friend std::ostream& operator<<(std::ostream& out,const Test& other) {
    out << other.id << ": " << other.name;
    return out;
  }
};

int main() {
  Test test1(10,"Mike");
  Test test2(20,"Bob");
  std::cout << test1 << " " << test2 << std::endl;
  return 0;
}
