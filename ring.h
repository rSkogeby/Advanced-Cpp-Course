#ifndef RING_H_
#define RING_H_
#include <iostream>


template<typename T>
class ring {

public: 
  class iterator;


};

class ring::iterator {
  public: 
    void print() {
      std::cout << "Hello from iterator" << std::endl;
    }
};
#endif
