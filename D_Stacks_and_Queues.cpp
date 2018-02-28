#include <iostream>
#include <stack>
#include <queue>

class Test {
private: 
  std::string name;
public:
  Test(std::string name) : name(name) {
    
  }
  ~Test() {
     //std::cout << "Object destroyed!" << std::endl;
  }

  void print() {
    std::cout << name << std::endl;
  }
};

int main() {
  // LIFO
  std::stack<Test> testStack;
  std::queue<Test> testQueue;
 
  // STACK
  testStack.push(Test("Herbert"));
  testStack.push(Test("John"));
  testStack.push(Test("Sue"));

  Test& test1 = testStack.top();
  test1.print();

  testStack.pop(); //Returns void
  
  Test& test2 = testStack.top();
  test2.print();

  while( testStack.size() > 0 ) {
    Test& test3 = testStack.top();
    test3.print();
    testStack.pop();
    
  }
  
  // QUEUE
  testQueue.push(Test("Herbert"));
  testQueue.push(Test("John"));
  testQueue.push(Test("Sue"));

  while( testQueue.size() > 0 ) {
    Test& test4 = testQueue.front();
    test4.print();
    testQueue.pop();
  }
  testQueue.back().print();
  testQueue.front().print();
  std::cout << testQueue.size() << std::endl;
  testQueue.back().print();
  return 0;
}
