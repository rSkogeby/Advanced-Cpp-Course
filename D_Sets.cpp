#include <iostream>
#include <fstream>
#include <set>

class Person{
private:
  std::string name;
  int age;
public:
  Person() : name(""), age(0) {}
  Person(std::string name, int age) : name(name), age(age) {}
  void print(){
    std::cout << name << ": " << age << std::endl;
  }
  std::string getName() const {
    return name;
  }
  bool operator<(const Person& other) const {
    return name < other.name;
  }
  //friend std::ofstream& operator<<(const Person& other) const {
  //    
  //}

};


int main() {
  std::set<int> numbers;
  std::set<Person> people; 

  people.insert(Person("Bob",40));
  people.insert(Person("Elyssa",13));
  people.insert(Person("Darth Vader",10010));

  for(auto v : people){
    v.print();
  }

  std::set<Person>::iterator itFind = people.find(Person("Bob",40));

  if(itFind != people.end()){
    std::cout << "Found: " << (*itFind).getName() << std::endl;
  }

  return 0;
}
