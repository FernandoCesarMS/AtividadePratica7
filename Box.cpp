#include "Box.hpp"

Box::Box(){
    Ponto3D::set(0,0,0);
}
Box::Box(double X, double Y, double Z){
    Ponto3D::set(X,Y,Z);
}
double Box::Area(){
    double X = get_x(),Y = get_y(),Z = get_z();
    return (2*X*Y)+(2*X*Z)+(2*Y*Z);
}
double Box::Volume(){
    return get_x()*get_y()*get_z();
}