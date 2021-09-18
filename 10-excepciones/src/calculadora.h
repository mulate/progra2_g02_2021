#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <string>

class Calculadora {

    public:
        
    Calculadora() {}

    int Sumar(int numero1, int numero2);
    int Restar(int numero1, int numero2);
    int Multiplicar(int numero1, int numero2);
    float Dividir(float numero1, float numero2);
};

#endif
