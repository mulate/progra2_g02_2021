
#ifndef UNIT_TEST

#include <iostream>
#include "coordenada.h"
#include "calculadora.h"

using namespace std;

int main() {
    Coordenada e = Coordenada(0, 5);
    Coordenada e2 = Coordenada(2, 5); 
    std::cout << e.ToString() << std::endl; 
    std::cout << e2.ToString() << std::endl; 


    Calculadora calculadora;
    calculadora.Sumar(5, 3);

    cout << "Resultado: " << calculadora.ObtenerResultado() << endl;
    
    return 0;
}

#endif