#include <iostream>

// Functors, pre C++11 lambda functions

struct Test {
  virtual bool operator()(std::string& text) = 0;
  virtual ~Test(){}
};

struct MatchTest : Test {
  virtual bool operator()(std::string& text) {
    return text == "lion";
  }
};

void check(std::string text, Test& test) {
  if(test(text))
    std::cout << "Text matches" << std::endl;
  else
    std::cout << "No match" << std::endl;
}

int main() {
  MatchTest pred;
  std::string value = "lion";
  check(value,pred);
  return 0;
}
