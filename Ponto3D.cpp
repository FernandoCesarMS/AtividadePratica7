#include "Ponto3D.hpp"

Ponto3D::Ponto3D(){
    Ponto2D::set(0.0,0.0);
    z = 0.0;
}
Ponto3D::Ponto3D(double X,double Y,double Z){
    Ponto2D::set(X,Y);
    z = Z;
}
void Ponto3D::set(double X,double Y, double Z){
    Ponto2D::set(X,Y);
    z = Z;
}
ostream &operator<<(ostream &op, Ponto3D &p)
{
    op << endl;
    op << "x = " << p.get_x() << endl;
    op << "y = " << p.get_y() << endl;
    op << "z = " << p.get_z() << endl;
    return op;
}
double Ponto3D::get_z(){
    return z;
}
Ponto3D &Ponto3D::operator=(Ponto2D &p)
{
    set(p.get_x(),p.get_y(),0.0);
    return *this;
}
Ponto3D &Ponto3D::operator=(Ponto3D &p)
{
    set(p.get_x(),p.get_y(),p.get_z());
    return *this;
}