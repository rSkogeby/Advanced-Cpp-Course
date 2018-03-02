#include <iostream>
#include <algorithm>
#include <vector>

class Animal {
private:
  
public:
  virtual void run() = 0;
  virtual void speak() = 0;
};

class Dog : public Animal {
private:
    
public:
  virtual void speak() {
    std::cout << "Woof!" << std::endl;
  }

};

class Labrador : public Dog {
public:
  virtual void run() {
    std::cout << "Labrador running" << std::endl;
  }
  Labrador() {
    std::cout << "new labrador" << std::endl;
  }
};

void test(Animal& a) {
  a.run();
}

int main() {
  Labrador labs[5];
  Labrador lab;
  lab.speak();
  lab.run();

  Animal* animals[5];
  
  animals[0] = &lab;

  animals[0]->speak();

  test(lab);
  return 0;
}
