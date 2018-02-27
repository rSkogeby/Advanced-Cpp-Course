#include <iostream>
#include <fstream>
// SAVE STRUCT IN TEXT FILE (BINARY)
// READ STRUCT FROM TEXT FILE  (BINARY)
#pragma pack(push, 1)
struct Person {
  char name[50];
  int age;
  double height;
};
#pragma pack(pop)

int main() {
  
  Person someone = {"Frodo", 220, 0.8};

  std::string fileName = "test.bin";

  // WRITE BINARY FILE
  std::fstream outputFile;

  //std::ofstream outputFile;

  outputFile.open(fileName, std::ios::binary|std::ios::out);



  if(outputFile.is_open()) {

    outputFile.write(reinterpret_cast<char*>(&someone),sizeof(Person));

    //outputFile.write((char* )&someone,sizeof(Person));

    outputFile.close(); 

  } else {

    std::cout << "Could not create file " << fileName << std::endl;

  }
  
  // READ BINARY FILE
  Person someoneElse = {};

  std::ifstream inputFile;

  inputFile.open(fileName, std::ios::binary);

  if(inputFile.is_open()) {

    inputFile.read(reinterpret_cast<char*>(&someoneElse),sizeof(Person));

    //inputFile.write((char* )&someone,sizeof(Person));

    inputFile.close(); 

  } else {

    std::cout << "Could not create file " << fileName << std::endl;

  }
  std::cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << std::endl;
  return 0;
}
