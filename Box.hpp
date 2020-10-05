//Crie uma classe Box definida como um paralelepípedo retangular, uma figura tridimensional
//formada por seis paralelogramos. Os atributos de um objeto Box
//são largura, altura e profundidade. Defina funções membro para o cálculo da área e do
//volume da Box. Crie pelo menos um construtor de forma que seja
//possível inicializar um objeto Box a partir das coordenadas de seus vértices,
//ou seja, objetos do tipo Ponto 3D.

#include "Ponto3D.cpp"

class Box : public Ponto3D
{
public:
    Box();
    Box(double, double, double);
    double Area();
    double Volume();
private:
};