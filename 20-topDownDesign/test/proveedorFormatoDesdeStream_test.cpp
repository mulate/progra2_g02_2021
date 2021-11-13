#include <gtest/gtest.h>
#include <string>
#include <sstream>
#include "./../src/proveedorFormatoDesdeStream.h"

using namespace std;

namespace {
    TEST(ProveedorFormatoDesdeStream_Test, TestObtenerFormato) {
        /// AAA

        // Arrange - configurar el escenario
        string esperado = "Hola ";
        std::istringstream stream(esperado); 

        // Act - ejecute la operación
        ProveedorFormatoDesdeStream *proveedorFormatoArchivoStream = new ProveedorFormatoDesdeStream(&stream);
        string actual = proveedorFormatoArchivoStream->ObtenerFormato();
        delete proveedorFormatoArchivoStream;

        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }
}