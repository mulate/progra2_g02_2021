#ifndef OPERACIONPRUEBA_H
#define OPERACIONPRUEBA_H

#include "./../src/operacion.h"
#include <string>

using namespace std;

class OperacionPrueba : public Operacion {

    public:
    virtual string Ejecute(string valor) {
        return "Prueba " + valor;
    }

};

#endif