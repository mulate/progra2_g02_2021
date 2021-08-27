#include "cuadrado.h"
#include <string>

Cuadrado::Cuadrado(float largoLado)
{
    this->lado = largoLado;
}

float Cuadrado::CalculoArea() {
    return this->lado * this->lado;
}

std::string Cuadrado::ObtenerNombre() {
    return "Cuadrado";
}



