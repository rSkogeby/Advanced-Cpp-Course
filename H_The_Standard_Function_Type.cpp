#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

bool check(std::string &test) {
  return test.size() == 3;
}

class Check{
public: 
  bool operator()(std::string &test) {
    return test.size() == 5;
  }
} check1;


void run(std::function<bool(std::string&)> check) {
  std::string test = "dog";
  std::cout << check(test) << std::endl;  
}

int main() {
  // This works
  int size = 3;
  auto lambda = [size](std::string test){ return test.size() == size; };
  run(lambda);
  
  // This works
  std::vector<std::string> vec{"one","two","three"};
  auto count = std::count_if(vec.begin(),vec.end(),[](std::string test){ return test.size() == 3; });
  std::cout << count << std::endl;

  count = std::count_if(vec.begin(),vec.end(),check);
  std::cout << count << std::endl;
  // Check is anything that accepts a string and returns bool 
  count = std::count_if(vec.begin(),vec.end(),check1);
  std::cout << count << std::endl;

  // Pass in functors, function pointers or lambdas
  run(check);
  run(check1);
  run(lambda);
  
  std::function<int(int, int)> add = [](int one, int two){return one+two; };
  std::cout << add(7,3) << std::endl;

  return 0;
}
