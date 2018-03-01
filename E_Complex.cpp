//#include <iostream>
#include "E_Complex.h"
namespace caveofprogramming{

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
  out << other.getReal() << " + " << other.getImag() << "i";
  return out;
}
Complex operator+(const Complex& obj1, const Complex& obj2) {
  double real = obj1.getReal()+obj2.getReal();
  double imag = obj1.getImag()+obj2.getImag();
  return Complex(real,imag); 
}
Complex operator+(const Complex& obj1, double obj2){
  double real = obj1.getReal()+obj2;
  double imag = obj1.getImag();
  return Complex(real,imag); 
}
Complex operator+(double obj1, const Complex& obj2) {
  double real = obj2.getReal()+obj1;
  double imag = obj2.getImag();
  return Complex(real,imag); 
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

}
