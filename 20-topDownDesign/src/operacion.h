#ifndef OPERACION_H
#define OPERACION_H

#include <string>

using namespace std;

class Operacion {

    public:
    virtual string Ejecute(string valor) = 0;

};

#endif