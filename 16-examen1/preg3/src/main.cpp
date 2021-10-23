#include <iostream>

#include "cuentaAhorros.h"
#include "deposito.h"
#include "retiro.h"

int main() {

    CuentaAhorros *cuenta = new CuentaAhorros();

    Deposito *deposito1 = new Deposito(1000.53);
    cuenta->AgregarMovimiento(deposito1);

    Retiro *retiro1 = new Retiro(50.53);
    cuenta->AgregarMovimiento(retiro1);

    float saldo = cuenta->ObtenerSaldoCuenta();

    delete cuenta;

    return 0;
}