#include <iostream>
#include <vector>
int main() {
  int value{5};
  std::cout << value << std::endl;
  std::string text{"Hello"};
  std::cout << text << std::endl;
  int numbers[]{1,2,4};
  std::cout << numbers[1] << std::endl;

  int *pInts = new int[3]{1,2,3};
  std::cout << pInts[1] << std::endl;

  int value1{};
  std::cout << value1 <<  std::endl;
  
  
  int *pSomething{&value};
  std::cout<< *pSomething << std::endl;
  
  int *pSomething1{};
  std::cout<< pSomething1 << std::endl; //nullptr

  int numbers1[5]{};
  std::cout << numbers1[2] << std::endl;
  std::cout << std::endl;

  std::vector<std::string> strings{"one","two","three"};
  std::cout << strings[2] << std::endl;
  return 0;
}
