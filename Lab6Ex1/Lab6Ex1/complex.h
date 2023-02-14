#pragma once

#include<string>
#include<complex>
using namespace std;

struct Complex {
    double real;
    double imag;

    std::string toString() const;
    Complex conjugate() const;
    double magnitude() const;
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;
};

