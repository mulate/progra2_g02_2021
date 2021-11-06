#ifndef PROCESADORINSTRUCCIONES_H
#define PROCESADORINSTRUCCIONES_H

#include "procesador.h"
#include "identificadorOperacionesBase.h"

class ProcesadorInstrucciones : public Procesador {

    IdentificadorOperacionesBase *identificador;

    public:
    ProcesadorInstrucciones(IdentificadorOperacionesBase *identificador);
    
    virtual ~ProcesadorInstrucciones();
    virtual string Procese(string instruccion, string valor);

};

#endif