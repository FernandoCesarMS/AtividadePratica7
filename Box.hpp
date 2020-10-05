#include "Ponto3D.hpp"

class Box : public Ponto3D
{
public:
    Box();
    Box(double, double, double);
    double Area();
    double Volume();
    double Diagonal();
    bool isCube();
    friend ostream &operator<<(ostream &op, Ponto3D &p);

private:
};