#ifndef RETIRO_H
#define RETIRO_H

#include "movimiento.h"

class Retiro : public Movimiento {

    public:
    Retiro(float valor);
    ~Retiro() {}
    
    virtual float ObtenerValor();

};

#endif