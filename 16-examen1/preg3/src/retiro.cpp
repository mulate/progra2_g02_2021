#include "retiro.h"

Retiro::Retiro(float valor) {
    this->valor = valor;
}

float Retiro::ObtenerValor() {
    return this->valor * -1;
}