#include <gtest/gtest.h>
#include <string>
#include "./../src/identificadorOperaciones.h"
#include "./../src/excepcionOperacionNoExiste.h"
#include "operacionPrueba.h"
#include <map>

using namespace std;

namespace
{
    TEST(IdentificadorOperaciones_Test, Test_Encontro_Operacion)
    {
        /// AAA

        // Arrange - configurar el escenario
        Operacion *esperada = new OperacionPrueba();
        Operacion *no_esperada = new OperacionPrueba();

        // Act - ejecute la operación
        map<string, Operacion *> operacionesPrueba{};
        operacionesPrueba.insert(std::pair<string, Operacion *>("operacion_prueba1", esperada));
        operacionesPrueba.insert(std::pair<string, Operacion *>("operacion_prueba2", no_esperada));

        IdentificadorOperaciones *identificadorOperaciones = new IdentificadorOperaciones(operacionesPrueba);
        Operacion *actual = identificadorOperaciones->Identifique("operacion_prueba1");

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(IdentificadorOperaciones_Test, Test_Operacion_Diferente)
    {
        /// AAA

        // Arrange - configurar el escenario
        Operacion *esperada = new OperacionPrueba();
        Operacion *no_esperada = new OperacionPrueba();

        // Act - ejecute la operación
        map<string, Operacion *> operacionesPrueba{};
        operacionesPrueba.insert(std::pair<string, Operacion *>("operacion_prueba1", esperada));
        operacionesPrueba.insert(std::pair<string, Operacion *>("operacion_prueba2", no_esperada));

        IdentificadorOperaciones *identificadorOperaciones = new IdentificadorOperaciones(operacionesPrueba);
        Operacion *actual = identificadorOperaciones->Identifique("operacion_prueba2");

        // Assert - valide los resultados
        EXPECT_NE(esperada, actual);
    }

    TEST(IdentificadorOperaciones_Test, Test_Operacion_Desconocida)
    {
        /// AAA

        // Arrange - configurar el escenario
        Operacion *esperada = new OperacionPrueba();
        std::map<string, Operacion *> operacionesPrueba{};
        operacionesPrueba.insert(std::pair<string, Operacion *>("operacion_prueba1", esperada));

        // Act - ejecute la operación
        IdentificadorOperaciones *identificadorOperaciones = new IdentificadorOperaciones(operacionesPrueba);

        EXPECT_THROW({
            Operacion *actual = identificadorOperaciones->Identifique("operacion_prueba22133");
        }, ExcepcionOperacionNoExiste);
    }
}