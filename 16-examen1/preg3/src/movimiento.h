#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H

class Movimiento {

    protected:
    Movimiento() {}

    float valor;

    public:
    virtual ~Movimiento() = 0;
    virtual float ObtenerValor() = 0;

};

#endif