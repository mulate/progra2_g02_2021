#include <gtest/gtest.h>
#include <string>

#include "../src/calculadoraCosto.h"

namespace {
    TEST(CalculadoraTests, Articulo3) {
        
        CalculadoraCosto calculadora {3};

        float actual = calculadora.CalcularCosto(2);

        EXPECT_FLOAT_EQ(0.5, actual);
    }

}