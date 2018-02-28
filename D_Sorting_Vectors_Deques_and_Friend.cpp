//#include <>
#include <iostream>
#include <vector>
#include <algorithm>

class Test{
private:
  int id;
  std::string name;

public:
  Test(int id, std::string name) : id(id), name(name) {}

  void print() {
    std::cout << id << ": " << name << std::endl;
  }

  bool operator<(const Test& other) const {
    return name < other.name;
  }
  std::string getName(){
    return name;
  }
  friend bool comp(const Test& lhs, const Test& rhs);

};

bool comp(const Test& lhs, const Test& rhs) {
  return lhs.name < rhs.name;
}

int main() {

  std::vector<Test> tests;
  tests.push_back(Test(5,"Mike"));
  tests.push_back(Test(10,"Sue"));
  tests.push_back(Test(7,"Raj"));
  tests.push_back(Test(3,"Vicky"));

//  std::sort(tests.begin(),tests.end(),comp);
  std::sort(tests.begin(),tests.end(),[](Test lhs,Test rhs){ return lhs.getName() < rhs.getName(); });

  for( auto v : tests ) {
    v.print();
  }

  return 0;
}
