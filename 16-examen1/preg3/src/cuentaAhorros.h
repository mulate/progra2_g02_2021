#ifndef CUENTAAHORROS_H
#define CUENTAAHORROS_H

#include <vector>
#include "movimiento.h"

using namespace std;

class CuentaAhorros {

    vector<Movimiento *> movimientos;

    public:
    CuentaAhorros() {}
    ~CuentaAhorros();

    float ObtenerSaldoCuenta();
    void AgregarMovimiento(Movimiento *movimiento);    

};

#endif