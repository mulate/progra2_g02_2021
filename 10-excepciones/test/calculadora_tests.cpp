#include <gtest/gtest.h>
#include <string>

#include "../src/calculadora.h"
#include "../src/ExcepcionDivideEntreCero.h"

namespace {
    TEST(CalculadoraTests, Calculadora_Suma_Test) {
        Calculadora calculadora;
        int actual = calculadora.Sumar(2, 3);
        EXPECT_EQ(5, actual);
    }

    TEST(CalculadoraTests, Calculadora_Multiplicacion_Test) {
        Calculadora calculadora;
        int actual = calculadora.Multiplicar(3, 5);
        EXPECT_EQ(15, actual);
    }

    TEST(ExceptionTest, ExceptionTest1)
    {
        EXPECT_THROW({
            Calculadora calculadora;
            float actual = calculadora.Dividir(10.5, 0);
        }, ExcepcionDivideEntreCero);
    }
}