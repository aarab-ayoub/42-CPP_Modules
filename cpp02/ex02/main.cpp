#include "Fixed.hpp"
#include <iostream>

int main(void)
{
    // Constructors
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed c(10);
    Fixed d(42.42f);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    std::cout << std::endl;

    // Increment / Decrement
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;

    std::cout << std::endl;

    // Arithmetic operators
    std::cout << "c + d = " << c.operator+(d) << std::endl;
    std::cout << "c - d = " << c - d << std::endl;
    std::cout << "c * d = " << c * d << std::endl;
    std::cout << "c / d = " << c / d << std::endl;

    std::cout << std::endl;

    // Comparison operators
    std::cout << "c > d: " << (c > d) << std::endl;
    std::cout << "c < d: " << (c < d) << std::endl;
    std::cout << "c >= d: " << (c >= d) << std::endl;
    std::cout << "c <= d: " << (c <= d) << std::endl;
    std::cout << "c == d: " << (c == d) << std::endl;
    std::cout << "c != d: " << (c != d) << std::endl;

    std::cout << std::endl;

    // Min / Max
    std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;

    return 0;
}
