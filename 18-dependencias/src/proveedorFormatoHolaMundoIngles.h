#ifndef ProveedorFormatoHolaMundoIngles_H
#define ProveedorFormatoHolaMundoIngles_H

#include "proveedorFormato.h"

#include <string>

using namespace std;

class ProveedorFormatoHolaMundoIngles : public ProveedorFormato {

    public:
    virtual string ObtenerFormato();

};

#endif