#ifndef PROVEEDORENVIOCORREOS_H
#define PROVEEDORENVIOCORREOS_H

#include <string>

using namespace std;

class ProveedorEnvioCorreos {

    public:
    virtual void ProveedorEnvioCorreos(string destinatario, string titulo, string cuerpo) = 0;

};

#endif