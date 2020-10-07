#include "BusinessTraveler.hpp"

BusinessTraveler::BusinessTraveler() : Traveler("1")
{
    Pager x = *new Pager("1");
    p = x;
}
BusinessTraveler::BusinessTraveler(string c) : Traveler(c)
{
    Pager x = *new Pager(c);
}
BusinessTraveler::BusinessTraveler(const BusinessTraveler &that) : Traveler("")
{
    sT = that.sT;
    p = that.p;
}
istream &operator>>(istream &op, BusinessTraveler &that)
{
    cout << "Insira a string da classe Traveler: ";
    op >> that.sT;
    cout << endl << "Insira a string da classe Pager: ";
    string x;
    op >> x; // Não sei se desse jeito funciona
    that.p = *new Pager(x);
    return op;
}
