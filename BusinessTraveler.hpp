#include "Pager.hpp"
#include "Traveler.hpp"
#include <iostream>
class BusinessTraveler : public Traveler
{
protected:
    Pager p = *new Pager("");

public:
    BusinessTraveler();
    BusinessTraveler(string);
    BusinessTraveler(const BusinessTraveler &);
    friend istream &operator>>(istream &, BusinessTraveler &);
};
