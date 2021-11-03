#ifndef ProveedorFormatoHolaMundoEspanol_H
#define ProveedorFormatoHolaMundoEspanol_H

#include "proveedorFormato.h"

#include <string>

using namespace std;

class ProveedorFormatoHolaMundoEspanol : public ProveedorFormato {

    public:
    virtual string ObtenerFormato();

};

#endif