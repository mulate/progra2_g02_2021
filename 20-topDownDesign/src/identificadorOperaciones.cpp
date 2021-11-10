#include "identificadorOperaciones.h"

#include <string>
#include "excepcionOperacionNoExiste.h"

using namespace std;

IdentificadorOperaciones::IdentificadorOperaciones(map<string, Operacion *> mapa) {
    this->mapaOperaciones = mapa;
}

Operacion *IdentificadorOperaciones::Identifique(string idOperacion) {
    
    if (this->mapaOperaciones.count(idOperacion) == 0)
    {
        // No existe
        throw ExcepcionOperacionNoExiste();
    }

    Operacion *operacion = this->mapaOperaciones.at(idOperacion);
    return operacion;

}

