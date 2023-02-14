#include<complex.h>
#include<string>
#include<complex>
using namespace std;

string Complex::toString() const {
    stringstream ss;
    ss << real;
    if (imag >= 0) ss << "+";
    ss << imag << "i";
    return ss.str();
}

Complex Complex::conjugate() const {
    return Complex{ real, -imag };
}

double Complex::magnitude() const {
    return sqrt(real * real + imag * imag);
}

Complex Complex::operator+(const Complex& other) const {
    return Complex{ real + other.real, imag + other.imag };
}

Complex Complex::operator-(const Complex& other) const {
    return Complex{ real - other.real, imag - other.imag };
}

Complex Complex::operator*(const Complex& other) const {
    return Complex{ real * other.real - imag * other.imag,
                   real * other.imag + imag * other.real };
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real * other.real + other.imag * other.imag;
    return Complex{ (real * other.real + imag * other.imag) / denominator,
                   (imag * other.real - real * other.imag) / denominator };
}