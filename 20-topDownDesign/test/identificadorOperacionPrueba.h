#ifndef IdentificadorOperacionPrueba_H
#define IdentificadorOperacionPrueba_H

#include "./../src/identificadorOperacionesBase.h"
#include "./../src/operacion.h"

class IdentificadorOperacionPrueba : public IdentificadorOperacionesBase {

    Operacion *operacionPrueba;

    public:
    IdentificadorOperacionPrueba(Operacion *operacionPrueba) {
        this->operacionPrueba = operacionPrueba;
    }

    virtual Operacion *Identifique(string operacion) {
        return this->operacionPrueba;
    }

};

#endif