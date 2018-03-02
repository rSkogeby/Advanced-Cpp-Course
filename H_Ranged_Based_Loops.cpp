#include <iostream>
#include <typeinfo>
#include <vector>
// The Auto Keyword
#define dd
int main() {
  std::string texts[] = {"one","two","three"};
  //auto texts = {"one","two","three"};
  for(auto t : texts) {
    std::cout << typeid(t).name() << std::endl;
  }

  std::vector<int> numbers;
  int N = 5;
  for(auto i=0; i<N;++i) {
    numbers.push_back(i);
  }
  for(auto v : numbers) {
    std::cout << v << std::endl;
  }
  return 0;
}
