#ifndef IDENTIFICADOROPERACIONESBASE_H
#define IDENTIFICADOROPERACIONESBASE_H

#include "operacion.h"
#include <string>

using namespace std;

class IdentificadorOperacionesBase {

    public:
    virtual Operacion *Identifique(string operacion) = 0;

};

#endif