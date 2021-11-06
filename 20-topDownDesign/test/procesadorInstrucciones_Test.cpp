#include <gtest/gtest.h>
#include <string>
#include "./../src/procesador.h"
#include "./../src/procesadorInstrucciones.h"
#include "identificadorOperacionPrueba.h"
#include "operacionPrueba.h"

using namespace std;

namespace {
    TEST(ProcesadorInstrucciones_Test, TestInicial) {
        /// AAA

        // Arrange - configurar el escenario
        string instruccion { "instruccionPrueba" };
        string valor { "valorPrueba" };
        Operacion *operacion = new OperacionPrueba();

        IdentificadorOperacionesBase *identificador = new IdentificadorOperacionPrueba(operacion);

        // Act - ejecute la operación
        ProcesadorInstrucciones *procesadorPrueba = new ProcesadorInstrucciones(identificador);
        string actual = procesadorPrueba->Procese(instruccion, valor);
        delete procesadorPrueba;

        // Assert - valide los resultados
        EXPECT_NE("", actual);
    }
}