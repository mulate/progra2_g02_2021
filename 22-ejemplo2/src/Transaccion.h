#ifndef Transaccion_H
#define Transaccion_H

#include <string>

using namespace std;

class Transaccion {

    float monto;
    string moneda;

    public:
    Transaccion(float monto, string moneda) {
        this->monto = monto;
        this->moneda = moneda;
    }

    float ObtenerMonto() {
        return this->monto;
    }

    string ObtenerMoneda() {
        return this->moneda;
    }
};

#endif