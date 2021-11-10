#ifndef OPERACIONHOLA_H
#define OPERACIONHOLA_H

#include "operacion.h"
#include "proveedorFormato.h"
#include <string>

using namespace std;

class OperacionHola : public Operacion {

    ProveedorFormato *proveedorFormato;

    public:
    OperacionHola(ProveedorFormato *proveedorFormato);

    virtual string Ejecute(string valor);

};

#endif