#include <iostream>
#include <vector>
// Morale: setting enough capacity in beginning can improve performance of program

int main() {
  std::vector<double> numbers(0);
  
  std::cout << "Size: " << numbers.size() << std::endl;

  int capacity = numbers.capacity();
  // Capacity of vector increases in steps as elements added to vector.
  std::cout << "Capacity: " << capacity << std::endl;
  for(int i = 0; i < 10000; i++){
    numbers.push_back(i);
    if(numbers.capacity() != capacity) {
      capacity = numbers.capacity();
      std::cout << "Capacity: " << capacity << std::endl;
    }
  }
  // Resize from end of vector, capacity remains unchanged
  numbers.resize(100);
  std::cout << numbers[2] << std::endl;
  std::cout << "Size: " << numbers.size() << std::endl;
  std::cout << "Capacity: " << numbers.capacity() << std::endl;
  // Zeros size but not capacity
  numbers.clear();
  std::cout << "Size: " << numbers.size() << std::endl;
  std::cout << "Capacity: " << numbers.capacity() << std::endl;
  // Reserve increases capacity but not size 
  numbers.reserve(100000);
  std::cout << "Size: " << numbers.size() << std::endl;
  std::cout << "Capacity: " << numbers.capacity() << std::endl;


  return 0;
}
