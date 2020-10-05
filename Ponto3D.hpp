#include <iostream>
#include "Ponto2D.hpp"

class Ponto3D : public Ponto2D
{
private:
	double z;

public:
	Ponto3D();
	Ponto3D(double, double, double);
	friend ostream& operator<< (ostream &op, Ponto3D &p);
	Ponto3D& operator= (Ponto2D &p);
	Ponto3D& operator= (Ponto3D &p);
	void set(double, double, double);
	double get_z();
};
