#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <string>

class Calculadora {

    int resultadoActual;

    public:
        
    Calculadora();

    void Sumar(int numero1, int numero2);
    void Restar(int numero1, int numero2);
    void Multiplicar(int numero1, int numero2);
    void LimpiarResultado();
    std::string ObtenerResultado();
};

#endif
