#include <iostream>

class Complex{
private:
    double real, imag;
public:

    Complex(){}
    Complex(double r, double i): real(r), imag(i){}

    bool operator==(const Complex& c) const{
        return real == c.real && imag == c.imag;
    }

    void print() const{
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};