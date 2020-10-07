#include "Pager.hpp"

Pager::Pager(string x)
{
    sP = x;
}

Pager::Pager(const Pager &that)
{
    sP = that.sP;
}
istream &operator>>(istream &op, Pager &that)
{
    op >> that.sP;
    return op;
}
