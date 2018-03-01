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
    void print();
  };

  std::ostream& operator<<(std::ostream& out, const Complex& obj);
} /* namespace caveofprogramming */
#endif /* E_COMPLEX_H_ */
