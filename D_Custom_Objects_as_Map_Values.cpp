#include <iostream>
#include <map>

class Person{
private:
  std::string name;
  int age;
public:
  Person(const Person& other) {
    std::cout << "Copy constructor running" << std::endl;
    name = other.name;
    age = other.age;
  }
  
  Person() : name(""), age(0) {}
  
  Person(std::string name, int age) : name(name), age(age){ }

  void print() {
    std::cout << name << ": " << age << std::endl;
  }


};


int main() {
  std::map<int,Person> people;
  people[50] = Person("Mike",40);
  people[32] = Person("Raj",20);
  people[10] = Person("Vicky",30);
  people[66] = Person("Sue",0);
  Person bob = Person("Bob",4);
//  Person angelica = bob;
//  auto pp = std::make_pair(14,bob);
  people.insert(std::make_pair(14, Person("Bob",3)));
  people.insert(std::make_pair(14, Person("Bob1",5)));
  people.insert(std::make_pair(15, Person("Bob2",2)));

  for(std::map<int,Person>::iterator it = people.begin();
        it != people.end(); ++it){
    std::cout << it->first << ": " << std::flush;
      it->second.print(); 
  }

  return 0;
}
