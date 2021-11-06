#include "identificadorOperaciones.h"

#include <string>

using namespace std;

IdentificadorOperaciones::IdentificadorOperaciones(map<string, Operacion *> mapa) {
    this->mapaOperaciones = mapa;
}

Operacion *IdentificadorOperaciones::Identifique(string idOperacion) {
    
    Operacion *operacion = this->mapaOperaciones.at(idOperacion);
    return operacion;

}

