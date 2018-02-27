#include <iostream>
#include <fstream>

int main() {
  
  std::string filename = "stats.txt";
  std::ifstream input;
  input.open(filename);

  if(!input.is_open()) {
    return 1;
  }
  
  while(input) {
    
    std::string line;
    std::getline(input,line,':');
    int population;
    input >> population;
    
    if(!input){ //Break to not print last line
      break;
    }

    input >> std::ws; // Get newline character in txt-file

    std::cout << "'" << line << "'" << " -- " << "'" << population << "'" << std::endl;
  }
    
  input.close();

  return 0;
}
