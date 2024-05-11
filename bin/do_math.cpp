#include <iostream>

#include "math.hpp"

void print_power(double a, int p);
void print_square_root(double a);

int main()
{
    print_power(8, 2);
    print_power(10, -2);
    print_power(1000000, 0);

    print_square_root(2);
    print_square_root(144);
    print_square_root(-4);
}

void print_power(double a, int p)
{
    double result = power(a, p);
    std::cout << "(" << a << ")" << "^" << "(" << p << ")" << " = " << result << std::endl;
}

void print_square_root(double a)
{
    double result = square_root(a);
    std::cout << "√" << "(" << a << ")" << " = " << result << std::endl;
}
