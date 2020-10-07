#include "Traveler.hpp"

Traveler::Traveler(string x)
{
    sT = x;
}

Traveler::Traveler(const Traveler &that)
{
    sT = that.sT;
}
istream &operator>>(istream &op, Traveler &that)
{
    op >> that.sT;
    return op;
}
