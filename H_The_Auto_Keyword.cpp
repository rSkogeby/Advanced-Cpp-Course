#include <iostream>
#include <typeinfo>
// The Auto Keyword
template<typename T>
void print(T input) {
  std::cout << input << std::endl;
}
template<typename T,typename S>
auto test(T value1,S value2) -> decltype(value1 + value2) {
  return value1 + value2;
}

int get() {
  return 999;
}

auto test2() -> decltype(get()) {
  return get();
}

int main() {
  auto value = 7;
  std::cout << value << std::endl;
  auto text = "Hello";
  print("Hello there");
  print(test(76,5.2));
  print(test2());
  return 0;
}
