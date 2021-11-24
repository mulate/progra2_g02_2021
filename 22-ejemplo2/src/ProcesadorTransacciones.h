#ifndef ProcesadorTransacciones_H
#define ProcesadorTransacciones_H

#include "ProveedorTipoCambio.h"
#include "ProveedorTransaccionesPendientes.h"

class ProcesadorTransacciones {

    ProveedorTipoCambio *proveedorTipoCambio;
    ProveedorTransaccionesPendientes *proveedorTransaccionesPendientes;

    public:
    ProcesadorTransacciones(ProveedorTipoCambio *proveedorTipoCambio, ProveedorTransaccionesPendientes *proveedorTransaccionesPendientes);

    float ObtenerSumaTransaccionesPendientes(int idPersona);

};

#endif