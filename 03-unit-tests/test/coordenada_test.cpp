#include <gtest/gtest.h>
#include <string>

#include "../src/coordenada.h"

namespace {
    TEST(CoordenadasTests, CoordenadaTest_ToString_Test) {
        Coordenada coordenada = Coordenada(3,5);
        std::string actual = coordenada.ToString();
        EXPECT_EQ("(3, 5)", actual);
    }
}