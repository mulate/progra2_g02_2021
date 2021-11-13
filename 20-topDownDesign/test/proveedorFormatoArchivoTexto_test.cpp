#include <gtest/gtest.h>
#include <string>
#include <sstream>
#include "./../src/proveedorFormatoArchivoTexto.h"

using namespace std;

namespace {
    TEST(ProveedorFormatoArchivoTexto_Test, TestObtenerFormato) {
        /// AAA

        // Arrange - configurar el escenario
        string esperado = "Hola ";
        std::istringstream stream(esperado); 

        // Act - ejecute la operación
        ProveedorFormatoArchivoTexto *proveedorFormatoArchivoTexto = new ProveedorFormatoArchivoTexto(&stream);
        string actual = proveedorFormatoArchivoTexto->ObtenerFormato();
        delete proveedorFormatoArchivoTexto;

        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }
}