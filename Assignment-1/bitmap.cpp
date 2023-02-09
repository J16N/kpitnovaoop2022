#include <iostream>
#include <cmath>
#include "bitmap.h"

using namespace std;

Complex::Complex(): real(0), img(0) {}
    
Complex::Complex(int r, int i): real(r), img(i) {}
    
void Complex::Accept()
{
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> img;
}

void Complex::Display()
{
    cout << real << " + " << img << "i" << endl;
}
    
Complex Complex::operator+(Complex &c)
{
    return Complex(real + c.real, img + c.img);
}
    
Complex Complex::operator-(Complex &c)
{
    return Complex(real - c.real, img - c.img);

}
Complex Complex::operator++()
{
    real = real + 1;
    img = img + 1;
    return *this;
}
    
Complex Complex::operator++(int)
{
    Complex temp(real, img);
    real = real + 1;
    img = img + 1;
    return temp;
}

bool Complex::operator==(Complex &c)
{
    return ((real == c.real) && (img == c.img));
}
