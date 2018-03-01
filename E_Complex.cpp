//#include <iostream>
#include "E_Complex.h"
using namespace caveofprogramming;

Complex::Complex() : real(0),imag(0) {}
Complex::Complex(double real, double imag) : real(real),imag(imag) {}
Complex::Complex(const Complex& other) {
  this->real = other.real;
  this->imag = other.imag;
}
Complex& Complex::operator=(const Complex& other) {
  this->real = other.real;
  this->imag = other.imag;
  return *this;
}
std::ostream& operator<<(std::ostream& out,
  const Complex& other) {
  out << other.getReal() << " + " << other.getImag() << "i" << std::endl;
  return out;
}
double Complex::getReal() const {
   return this->real;
}
double Complex::getImag() const {
   return this->imag;
}
void Complex::print() {
  std::cout << real << " + " << imag << "i" << std::endl;
}
  
