#include <gtest/gtest.h>
#include <string>

#include "../src/proveedorFormatoHolaMundoEspanol.h"

using namespace std;

namespace {
    TEST(ProveedorFormatoTests, ProveedorFormatoHolaMundoEspanolTest) {
        
        ProveedorFormatoHolaMundoEspanol proveedor {};
        std::string actual = proveedor.ObtenerFormato();
        
        EXPECT_EQ("Hola ", actual);
    }
}