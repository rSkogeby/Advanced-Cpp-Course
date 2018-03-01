#ifndef E_COMPLEX_H
#define E_COMPLEX_H
#include <iostream>

namespace caveofprogramming {
  class  Complex {
  private: 
    double real;
    double imag;
  public:
    Complex();
    Complex(double real, double imag);
    Complex(const Complex& other);
    Complex& operator=(const Complex& other);
    double getReal() const;
    double getImag() const;
    bool operator==(const Complex& other) const;
    bool operator!=(const Complex& other) const;
    Complex operator*() const;
    void print();
  };

  std::ostream& operator<<(std::ostream& out, const Complex& obj);
  Complex operator+(const Complex& obj1, const Complex& obj2);
  Complex operator+(const Complex& obj1, double obj2);
  Complex operator+(double obj1, const Complex& obj2);
} /* namespace caveofprogramming */
#endif /* E_COMPLEX_H_ */
