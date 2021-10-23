#ifndef DEPOSITO_H
#define DEPOSITO_H

#include "movimiento.h"

class Deposito : public Movimiento {

    public:
    Deposito(float valor);
    ~Deposito() {}

    virtual float ObtenerValor();
};

#endif