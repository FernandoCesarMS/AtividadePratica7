#include <string.h>
#include <string>
using namespace std;

class Pager
{
protected:
    string sP = "";

public:
    Pager(string);
    Pager(const Pager &);
    friend istream &operator>>(istream &, Pager &);
};
