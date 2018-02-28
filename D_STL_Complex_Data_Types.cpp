//#include <>
#include <iostream>
#include <vector>
#include <map>

int main() {
  
  std::map<std::string,std::vector<int> > scores;

  scores["Mike"].push_back(10);
  scores["Vicky"].push_back(15);
  scores["Mike"].push_back(20);

  for(auto v : scores){
    std::string name = v.first;
    std::vector<int> scoreList = v.second;

    std::cout << name << ": " << std::flush;

    for(auto m : scoreList) {
      std::cout << m << " ";
    }
    std::cout << std::endl;

  }

  return 0;
}
