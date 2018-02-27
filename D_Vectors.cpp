#include <iostream>
#include <vector>

// Template class has <>

int main() {
  std::vector<std::string> strings;

  strings.push_back("One");
  strings.push_back("Two");
  strings.push_back("Three");
  std::cout << strings[1] << std::endl;
  std::cout << strings.size() << std::endl;

  for(int i = 0; i < strings.size(); i++){
    std::cout << strings[i] << std::endl;
  }

  
  for(std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); ++it){
    std::cout << *it << std::endl;
  }


  for(auto v : strings){
    std::cout << v << std::endl;
  }

}
