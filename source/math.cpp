#include "math.hpp"

#include <limits>
#define TOL std::numeric_limits<double>().min()
#define NAN std::numeric_limits<double>().signaling_NaN()

#ifdef DEBUG
#include <iostream>
#endif

double power(double a, int p)
{
    double result = 1;

    if (p > 0)
    {
        for (int i = 0; i < p; i++)
        {
            result *= a;
        }
    }
    else
    {
        for (int i = 0; i < p * -1; i++)
        {
            result /= a;
        }
    }

    return result;
}

double square_root(double a)
{
    if (a < 0)
        return NAN;

    double xn{1}, xn1, err;
#ifdef DEBUG
    unsigned niter{0};
#endif
    while (true)
    {
        xn1 = 0.5 * (xn + a / xn);
        err = xn1 > xn ? xn1 - xn : xn - xn1;
        if (err < TOL)
            break;
        xn = xn1;
#ifdef DEBUG
        niter++;
#endif
    }

#ifdef DEBUG
    std::cout << "DEBUG: Number of iterations required for square root convergence: " << niter << std::endl;
#endif

    return xn1;
}
