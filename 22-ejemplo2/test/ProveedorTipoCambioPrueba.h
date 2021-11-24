#ifndef ProveedorTipoCambioPrueba_H
#define ProveedorTipoCambioPrueba_H

#include "./../src/ProveedorTipoCambio.h"
#include <map>
#include <string>

using namespace std;

class ProveedorTipoCambioPrueba : public ProveedorTipoCambio {

    map<string, float> tipoCambioPorMoneda;

    public:
    ProveedorTipoCambioPrueba(map<string, float> tipoCambioPorMoneda) {
        this->tipoCambioPorMoneda = tipoCambioPorMoneda;
    }

    virtual float ObtenerTipoCambio(string moneda) {
        return this->tipoCambioPorMoneda.at(moneda);
    }
};

#endif