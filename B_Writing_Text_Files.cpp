#include <iostream>
#include <fstream>
/*
*/

int main() {
  //std::ofstream outFile;
  std::fstream outFile;
  std::string outputFileName = "text.txt";
  outFile.open(outputFileName,std::ios::out);
  //outFile.open(outputFileName);

  if(outFile.is_open()) {
    outFile << "Hello there" << std::endl;
    outFile << 123;
    outFile.close();
  } else {
    std::cout << "Could not create file: " << outputFileName << std::endl;
  }

  return 0;
}
