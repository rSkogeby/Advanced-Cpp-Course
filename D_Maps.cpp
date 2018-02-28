#include <iostream>
#include <map>

int main() {
  std::map<std::string,int> ages;
  ages["Mike"] = 40;
  ages["Raj"] = 20;
  ages["Vicky"] = 30;

  ages["Mike"] = 70;

  // make_pair makes pair of correct types
  ages.insert(std::pair<std::string,int> ("Peter",100));
  ages.insert(std::make_pair("Peter2",101));

  std::cout << ages["Raj"] << std::endl;

  if( ages.find("Vicky1") != ages.end() ) {
    std::cout << "Found Vicky" << std::endl;
  } else {
    std::cout << "Key not found!" << std::endl;
  }
  for(std::map<std::string,int>::iterator it = ages.begin();
        it != ages.end(); ++it){
    std::pair<std::string,int> age = *it;

    std::cout << age.first << ": " << age.second << std::endl;
  }
  for(std::map<std::string,int>::iterator it = ages.begin();
        it != ages.end(); ++it){
    std::cout << it->first << ": " << it->second << std::endl;
  }

  return 0;
}
