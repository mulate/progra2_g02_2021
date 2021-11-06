#ifndef PROCESADOR_H
#define PROCESADOR_H

#include <string>

using namespace std;

class Procesador
{
    public:
    virtual ~Procesador() {}
    virtual string Procese(string instruccion, string valor) = 0;
};

#endif