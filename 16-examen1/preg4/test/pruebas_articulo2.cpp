#include <gtest/gtest.h>
#include <string>

#include "../src/calculadoraCosto.h"

namespace {
    TEST(CalculadoraTests, Articulo2_Menor3) {
        
        CalculadoraCosto calculadora {2};

        float actual = calculadora.CalcularCosto(2);

        EXPECT_FLOAT_EQ(1.2, actual);
    }

    TEST(CalculadoraTests, Articulo2_Entre3Y9) {
        
        CalculadoraCosto calculadora {2};

        float actual = calculadora.CalcularCosto(5);

        EXPECT_FLOAT_EQ(2.25, actual);
    }

    TEST(CalculadoraTests, Articulo2_Mayor9) {
        
        CalculadoraCosto calculadora {2};

        float actual = calculadora.CalcularCosto(10);

        EXPECT_FLOAT_EQ(3.45, actual);
    }
}