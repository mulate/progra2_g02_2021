
#ifndef UNIT_TEST

#include <iostream>
#include <vector>
#include "forma2D.h"
#include "cuadrado.h"

using namespace std;

int main() {
    
    // Forma2D forma;

    // Vector de formas
    std::vector<Forma2D*> formas;

    Cuadrado *cuadrado = new Cuadrado(4);

    formas.push_back(cuadrado);

    for (Forma2D* forma : formas)
    {
        cout << "El área del tipo " << forma->ObtenerNombre() << " es " << forma->CalculoArea() << std::endl;
    }

    // Delete formas
    for (Forma2D* forma : formas)
    {
        delete forma;
    }


    return 0;
}

#endif