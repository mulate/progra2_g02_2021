#ifndef UNIT_TEST

#include <iostream>
#include "calculadoraCosto.h"

int main() {

    CalculadoraCosto calculadora {3};

    float costoFinal = calculadora.CalcularCosto(2);
    std::cout << costoFinal;

    return 0;
}

#endif