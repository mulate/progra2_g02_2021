#ifndef ProveedorTipoCambio_H
#define ProveedorTipoCambio_H

#include <string>

using namespace std;

class ProveedorTipoCambio {

    public:
    virtual float ObtenerTipoCambio(string moneda) = 0;

};

#endif