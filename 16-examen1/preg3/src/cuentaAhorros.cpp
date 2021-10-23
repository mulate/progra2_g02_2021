#include "cuentaAhorros.h"

CuentaAhorros::~CuentaAhorros() {
    for (Movimiento *movimiento : this->movimientos)
    {
        delete movimiento;
    }
}

float CuentaAhorros::ObtenerSaldoCuenta() {

    float total = 0;

    for (Movimiento *movimiento : this->movimientos)
    {
        total += movimiento->ObtenerValor();
    }

    return total;
}

void CuentaAhorros::AgregarMovimiento(Movimiento *movimiento) {
    this->movimientos.push_back(movimiento);
}