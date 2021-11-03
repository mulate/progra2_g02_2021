#ifndef ENVIOCORREOS_H
#define ENVIOCORREOS_H

#include <string>

using namespace std;

class EnvioCorreos {

    public:
    virtual void EnvioCorreos(string destinatario, string titulo, string cuerpo) = 0;

};

#endif