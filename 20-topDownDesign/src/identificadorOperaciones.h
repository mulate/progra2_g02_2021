#ifndef IdentificadorOperaciones_H
#define IdentificadorOperaciones_H

#include "identificadorOperacionesBase.h"
#include "operacion.h"
#include <map>

using namespace std;

class IdentificadorOperaciones : public IdentificadorOperacionesBase {

    map<string, Operacion *> mapaOperaciones;

    public:
    IdentificadorOperaciones(map<string, Operacion *> mapa);

    virtual Operacion *Identifique(string operacion);
};

#endif