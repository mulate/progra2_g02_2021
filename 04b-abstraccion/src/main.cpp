
#ifndef UNIT_TEST

#include <iostream>
#include <vector>
#include "forma2D.h"
#include "cuadrado.h"
#include "trianguloEquilatero.h"

using namespace std;

int main() {

    Cuadrado *cuadrado1 = new Cuadrado(4);
    Cuadrado *cuadrado2 = new Cuadrado(5);
    TrianguloEquilatero *triangulo = new TrianguloEquilatero(6);

    std::vector<Forma2D *> coleccionFormas;
    coleccionFormas.push_back(cuadrado1);
    coleccionFormas.push_back(cuadrado2);
    coleccionFormas.push_back(triangulo);

    for (Forma2D *forma : coleccionFormas)
    {
        std::cout << "El área de " << forma->ObtenerNombre() << " es " << forma->CalculoArea() << std::endl;
    }
    
    // Limpiar memoria
    delete cuadrado1;
    delete cuadrado2;
    delete triangulo;

    return 0;
}

#endif