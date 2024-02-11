#include <iostream>
using namespace std;
class Complex
{
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Overload the addition operator (+) for Complex numbers
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Overload the subtraction operator (-) for Complex numbers
    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Overload the multiplication operator (*) for Complex numbers
    Complex operator*(const Complex &other) const
    {
        return Complex((real * other.real) - (imaginary * other.imaginary),
                       (real * other.imaginary) + (imaginary * other.real));
    }

    // Overload the output stream operator (<<) to print Complex numbers
    friend ostream &operator<<(ostream &os, const Complex &complex)
    {
        os << "(" << complex.real << " + "<< "i" << complex.imaginary << ")";
        return os;
    }
};

int main()
{
    Complex a(2.0, 3.0);
    Complex b(1.0, 2.0);

    Complex sum = a + b;
    Complex difference = a - b;
    Complex product = a * b;

    cout << "a + b = " << sum << endl;
    cout << "a - b = " << difference << endl;
    cout << "a * b = " << product << endl;

    return 0;
}
