#include <gtest/gtest.h>
#include <string>

#include "../src/holaMundo.h"
#include "ProveedorFormatoPrueba.h"

using namespace std;

namespace {
    TEST(HolaMundoTests, HolaMundo_Test) {
        ProveedorFormatoPrueba *proveedor = new ProveedorFormatoPrueba("Formato de prueba ");
        HolaMundo hola {proveedor};
        std::string actual = hola.GenerarHolaMundo("para todos");
        
        EXPECT_EQ("Formato de prueba para todos", actual);
    }
}