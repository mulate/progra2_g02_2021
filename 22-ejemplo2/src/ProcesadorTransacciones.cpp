#include "ProcesadorTransacciones.h"
#include <vector>
#include "Transaccion.h"

ProcesadorTransacciones::ProcesadorTransacciones(ProveedorTipoCambio *proveedorTipoCambio, ProveedorTransaccionesPendientes *proveedorTransaccionesPendientes) {
    this->proveedorTipoCambio = proveedorTipoCambio;
    this->proveedorTransaccionesPendientes = proveedorTransaccionesPendientes;
}

float ProcesadorTransacciones::ObtenerSumaTransaccionesPendientes(int idPersona) {
    
    vector<Transaccion> transaccionesPendientes = this->proveedorTransaccionesPendientes->ObtenerTransaccionesPendientes(idPersona);
    
    float total = 0;

    for (Transaccion transaccion : transaccionesPendientes) {
        float tipoCambio = this->proveedorTipoCambio->ObtenerTipoCambio(transaccion.ObtenerMoneda());
        float montoConvertido = transaccion.ObtenerMonto() * tipoCambio;
        total += montoConvertido;
    }

    return total;
}