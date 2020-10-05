#include "Box.hpp"

Box::Box(){
    Ponto3D::set(0,0,0);
}
Box::Box(double X, double Y, double Z){
    Ponto3D::set(X,Y,Z);
}