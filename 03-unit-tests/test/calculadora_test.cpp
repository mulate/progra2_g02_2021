#include <gtest/gtest.h>
#include <string>

#include "../src/calculadora.h"

namespace {
    TEST(CalculadoraTests, Calculadora_Suma_Test) {
        Calculadora calculadora;
        calculadora.Sumar(2, 3);
        std::string actual = calculadora.ObtenerResultado();
        EXPECT_EQ("5", actual);
    }

    TEST(CalculadoraTests, Calculadora_Multiplicacion_Test) {
        Calculadora calculadora;
        calculadora.Multiplicar(3, 5);
        std::string actual = calculadora.ObtenerResultado();
        EXPECT_EQ("15", actual);
    }
}