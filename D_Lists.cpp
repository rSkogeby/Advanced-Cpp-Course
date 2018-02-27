#include <iostream>
#include <list>

int main() {

  std::list<int> numbers;
  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);
  numbers.push_front(0);

  auto itt = numbers.begin();
  itt++;
  numbers.insert(itt,100);
  std::cout << "Element: " << *itt << std::endl;
  
  auto eraseIt = numbers.begin();
  eraseIt++;
  eraseIt = numbers.erase(eraseIt);
  std::cout << "Element: " << *eraseIt << std::endl;

  for(auto it : numbers){
    std::cout << it << std::endl;
  }
 
  for(auto it = numbers.begin(); it != numbers.end();){
    if(*it == 2){
      numbers.insert(it,1234);
    }
    // Erasing and reassigning it effectively does it++
    if(*it == 1){
      it = numbers.erase(it);
    } else {
      it++;
    }

  }

  return 0;
}
