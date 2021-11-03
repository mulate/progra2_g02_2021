#ifndef PLANILLA_H
#define PLANILLA_H

#include "envioCorreos.h"
#include "tipoCambio.h"

class Planilla {

    EnvioCorreos *envioCorreo;
    TipoCambio *tipoCambio;

    public:
    Planilla();

};

#endif