#include <iostream>


template<typename T>
void print(T n) {
  std::cout << n << std::endl;
}

int main() {
  print<int>(5);
  print("Hello, World!");

  return 0;
}
