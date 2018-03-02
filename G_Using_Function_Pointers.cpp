#include <iostream>
#include <algorithm>
#include <vector>

bool match(std::string test) {
  return test.size() == 3;
}

template<typename T>
int countStrings(const T& begg,const T& endd, bool (*match)(std::string test)) {
  int Q = 0;
  T beg = begg;
  T end = endd;
  for(beg;beg != end;++beg) {
    if( match(*beg) ) Q++;
  }
  return Q;
}

int main() {

  std::vector<std::string> texts;
  texts.push_back("one");
  texts.push_back("two");
  texts.push_back("three");
  texts.push_back("two");
  texts.push_back("four");
  texts.push_back("two");
  texts.push_back("three");

  std::cout << match("one") << std::endl;
  std::cout << std::count_if(texts.begin(), texts.end(), match) << std::endl; // returns number strings with three characters

  // Implement own version of count_if

  std::cout << countStrings(texts.begin(), texts.end(), match) << std::endl; // returns number strings with three characters
  //std::cout << countStrings<std::vector<std::string>::iterator>(texts.begin(), texts.end(), match) << std::endl; // returns number strings with three characters

  return 0;
}

