#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector< Tagliatelle >& wektor)
{
    double      M = 0.0;
    std::size_t i = 1u;
    for (auto it = wektor.crbegin(); it != wektor.crend(); it++)
    {
        M += it->ileMaki(i++);
    }
    if (M > 100.0)
    {
        throw 999;
    }
    else if (M > 50.0 && M <= 100.0)
    {
        throw 999.0;
    }
    else
    {
        return M;
    }
};