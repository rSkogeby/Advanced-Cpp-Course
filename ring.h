#ifndef RING_H_
#define RING_H_
#include <iostream>


template<typename T>
class ring {
private:
  int m_pos;
  int m_size;
  T* m_values;
public: 
  class iterator;
public:
  ring(int size): m_pos(0), m_size(size), m_values(NULL) {
    m_values = new T[size];
  }
  
  ~ring() {
    delete [] m_values;
  }
  
  int size() {
    return m_size;
  }

  void add(T value) {
    m_values[m_pos++] = value;
    if(m_pos == m_size) {
      m_pos = 0;
    }
  }

  T& get(int pos) {
    int i = pos%m_size;
    return m_values[i];
  }
};

template<typename T>
class ring<T>::iterator {
  public: 
    void print() {
      std::cout << "Hello from iterator" << std::endl;
    }
};
#endif
