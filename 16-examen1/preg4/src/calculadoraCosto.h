#ifndef CALCULADORA_COSTO_H
#define CALCULADORA_COSTO_H

class CalculadoraCosto {

    int idArticulo;
    
    float CalculoArticulo1(float);
    float CalculoArticulo2(float);
    float CalculoArticulo3(float);

    public:
    CalculadoraCosto(int);

    float CalcularCosto(float);
};

#endif