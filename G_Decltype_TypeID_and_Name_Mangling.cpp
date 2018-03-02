#include <iostream>
#include <typeinfo>
// Decltype, typeid, name mangling 

// decltype(input) argument; declares argument with same typeid as input
// typeid(input).name returns mangled name of typeid of input
// pipe c++filt -t to make run for name mangling interpretation


int main() {
  std::string value;
  std::cout << typeid(value).name() << std::endl;
  decltype(value) name = "Bob"; 
  std::cout << name << std::endl;

  return 0;
}
