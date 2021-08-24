
#include "calculadora.h"
#include <string>

Calculadora::Calculadora() {
    resultadoActual = 0;
}

void Calculadora::Sumar(int numero1, int numero2) {
    resultadoActual = numero1 + numero2;
}

void Calculadora::Restar(int numero1, int numero2) {
    resultadoActual = numero1 - numero2;
}

void Calculadora::Multiplicar(int numero1, int numero2) {
    resultadoActual = numero1 * numero2;
}

void Calculadora::LimpiarResultado() {
    resultadoActual = 0;
}

std::string Calculadora::ObtenerResultado() {
    return std::to_string(resultadoActual);
}