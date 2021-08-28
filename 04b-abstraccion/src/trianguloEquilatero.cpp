#include "trianguloEquilatero.h"
#include <string>

TrianguloEquilatero::TrianguloEquilatero(float largoLado)
{
    this->lado = largoLado;
}

float TrianguloEquilatero::CalculoArea() {
    return this->lado * this->lado / 2;
}

std::string TrianguloEquilatero::ObtenerNombre() {
    return "Triángulo";
}



