#include <gtest/gtest.h>
#include <string>

#include "../src/calculadoraCosto.h"

namespace {
    TEST(CalculadoraTests, Articulo1_Menor3) {
        
        CalculadoraCosto calculadora {1};

        float actual = calculadora.CalcularCosto(2);

        EXPECT_FLOAT_EQ(0.69, actual);
    }

    TEST(CalculadoraTests, Articulo1_Entre3Y9) {
        
        CalculadoraCosto calculadora {1};

        float actual = calculadora.CalcularCosto(5);

        EXPECT_FLOAT_EQ(3.25, actual);
    }

    TEST(CalculadoraTests, Articulo1_Mayor9) {
        
        CalculadoraCosto calculadora {1};

        float actual = calculadora.CalcularCosto(10);

        EXPECT_FLOAT_EQ(8, actual);
    }
}