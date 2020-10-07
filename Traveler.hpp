#include <string.h>
#include <string>
#include "Pager.hpp"
using namespace std;
class Traveler
{
protected:
    string sT = "";

public:
    Traveler(string);
    Traveler(const Traveler &);
    friend istream &operator>>(istream &, Traveler &);
};
