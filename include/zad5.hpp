#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <iterator>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template < typename iterator >
void sortujTagliatelle(iterator begin, iterator end)
{

    std::sort(begin, end, [](const Tagliatelle& t1, const Tagliatelle& t2) {
        return t1.ileMaki(1) > t2.ileMaki(1);
    });
};