#include "Box.hpp"
#include <math.h>

Box::Box()
{
    Ponto3D::set(0, 0, 0);
}
Box::Box(double X, double Y, double Z)
{
    Ponto3D::set(X, Y, Z);
}
double Box::Area()
{
    double X = get_x(), Y = get_y(), Z = get_z();
    return (2 * X * Y) + (2 * X * Z) + (2 * Y * Z);
}
double Box::Volume()
{
    return get_x() * get_y() * get_z();
}
double Box::Diagonal()
{
    double X = get_x(), Y = get_y(), Z = get_z();
    return sqrt((X * X) + (Y * Y) + (Z * Z));
}
bool Box::isCube()
{
    if (get_x() == get_y() && get_z() == get_z())
        return true;
    else
        return false;
}
ostream &operator<<(ostream &op, Box &p)
{
    op << endl;
    op << "Paralelogramo "
       << "(" << p.get_x() << "," << p.get_y() << "," << p.get_z() << ")";
    op << endl
       << "A area eh de " << p.Area() << " m2";
    op << endl
       << "O volume eh de " << p.Volume() << " m3";
    op << endl;
    return op;
}