#ifndef PLANILLA_H
#define PLANILLA_H

#include "proveedorEnvioCorreos.h"
#include "proveedorTipoCambio.h"

class Planilla {

    ProveedorEnvioCorreos *envioCorreo;
    ProveedorTipoCambio *tipoCambio;

    public:
    Planilla(ProveedorEnvioCorreos *proveedorEnvioCorreo, ProveedorTipoCambio *proveedorTipoCambio);

};

#endif