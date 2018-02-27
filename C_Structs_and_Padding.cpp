#include <iostream>

// String creates a pointer to an object on the heap
// Allows strings of variable size
// Use char for allocating on the stack
// To store a struct in a file:
/*
Remove padding by
adding a preprocessor directive
pack(push,1) packs struct into 1-byte size chunks
surround struct with push and pop to limit packing to within the pound signs
*/
#pragma pack(push, 1)
struct Person {
  char name[50];
  int age;
  double weight;
};
#pragma pack(pop)

int main() {
  std::cout << sizeof(Person) << std::endl;
  return 0;
}
