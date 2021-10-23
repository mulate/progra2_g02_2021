#include "deposito.h"

Deposito::Deposito(float valor) {
    this->valor = valor;
}

float Deposito::ObtenerValor() {
    return this->valor;
}