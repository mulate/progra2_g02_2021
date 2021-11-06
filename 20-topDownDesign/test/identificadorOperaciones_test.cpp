#include <gtest/gtest.h>
#include <string>
#include "./../src/identificadorOperaciones.h"

using namespace std;

namespace {
    TEST(IdentificadorOperaciones_Test, TestInicial) {
        /// AAA

        // Arrange - configurar el escenario
        string operacion { "operacion_prueba1" };
        Operacion *expected = nullptr;

        // Act - ejecute la operación
        map<string, Operacion *> operacionesPrueba {};
        
        
        IdentificadorOperaciones *identificadorOperaciones = new IdentificadorOperaciones(operacionesPrueba);
        Operacion *actual = identificadorOperaciones->Identifique(operacion);

        // Assert - valide los resultados
        EXPECT_EQ(expected, actual);
    }
}