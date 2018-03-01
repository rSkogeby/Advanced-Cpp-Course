#include <iostream>
#include <vector>

template<typename T>
void show() {
  std::cout << T() << std::endl;
}
template<typename T>
void print(T n) {
  std::cout << "Template version: " << n << std::endl;
}

void print(int value) {
  std::cout << "Non-template version: " << value << std::endl;
}

int main() {
  print<int>(5);
  print("Hello, World!");
  print(4);
  print<>(4);
  print("Hi");
  print(std::vector<int>(1,2).back());
  show<double>();
  std::cout << int() << std::endl;
  return 0;
}
