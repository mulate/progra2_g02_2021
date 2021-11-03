#ifndef UNIT_TEST

#include <iostream>
#include "holaMundo.h"
#include "proveedorFormatoHolaMundoEspanol.h"
#include "proveedorFormatoHolaMundoIngles.h"

using namespace std;

int main() {

    ProveedorFormatoHolaMundoEspanol *proveedorEspanol = new ProveedorFormatoHolaMundoEspanol();
    HolaMundo holaMundoEspanol {proveedorEspanol};
    cout << holaMundoEspanol.GenerarHolaMundo(" a todos") << endl;

    delete proveedorEspanol;

    ProveedorFormatoHolaMundoIngles *proveedorIngles = new ProveedorFormatoHolaMundoIngles();
    HolaMundo holaMundoIngles {proveedorIngles};
    cout << holaMundoIngles.GenerarHolaMundo(" everyone") << endl;

    delete proveedorIngles;

    return 0;
}

#endif