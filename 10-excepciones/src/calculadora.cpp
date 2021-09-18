
#include "calculadora.h"
#include "ExcepcionDivideEntreCero.h"
#include <iostream>
#include <string>

int Calculadora::Sumar(int numero1, int numero2) {
    return numero1 + numero2;
}

int Calculadora::Restar(int numero1, int numero2) {
    return numero1 - numero2;
}

int Calculadora::Multiplicar(int numero1, int numero2) {
    return numero1 * numero2;
}

float Calculadora::Dividir(float numero1, float numero2)
{
    if (numero2 == 0)
    {
        throw ExcepcionDivideEntreCero();
    }
    
    return numero1 / numero2;
}

