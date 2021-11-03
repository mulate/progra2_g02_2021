#include "holaMundo.h"

HolaMundo::HolaMundo(ProveedorFormato *proveedor) {
    this->proveedor = proveedor;
}

string HolaMundo::GenerarHolaMundo(string nombre) {
    string salida = this->proveedor->ObtenerFormato();

    return salida + nombre;
}