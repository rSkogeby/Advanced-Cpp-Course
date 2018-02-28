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

  void print() const {
    std::cout << name << ": " << age << std::flush;
  }
  // First const assures other won't be changed
  // Second const assures person won't be changed
  bool operator<(const Person& other) const {
    if(name == other.name) {
      return age < other.age;  
    } else {
      return name < other.name;
    }
  }

};


int main() {

  std::string test1 = "Mike";
  std::string test2 = "Bob";
  bool test = test1 < test2;

  std::map<Person,int> people;
  people[Person("Mike",40) ] =50; 
  people[Person("Mike",30) ] =30; 
  people[Person("Raj",20)  ] =32; 
  people[Person("Vicky",30)] =10; 
  people[Person("Sue",0)   ] =66; 

  for(std::map<Person,int>::iterator it = people.begin();
        it != people.end(); ++it){
    std::cout << it->second << ": " << std::flush;
    it->first.print();
    std::cout << std::endl;
  }

  return 0;
}
