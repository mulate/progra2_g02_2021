#include "operacionHola.h"
#include <string>

OperacionHola::OperacionHola(ProveedorFormato *proveedorFormato) {
    this->proveedorFormato = proveedorFormato;
}

string OperacionHola::Ejecute(string valor) {
    return proveedorFormato->ObtenerFormato() + valor;
}