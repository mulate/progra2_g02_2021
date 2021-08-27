#include <gtest/gtest.h>

#include "../src/cuadrado.h"

namespace {
    TEST(CuadradoTests, CalculoArea_Test) {
        Cuadrado cuadrado {4};
        float actual = cuadrado.CalculoArea();

        EXPECT_EQ(16, actual);
    }
}