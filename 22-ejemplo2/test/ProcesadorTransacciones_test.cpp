#include <gtest/gtest.h>
#include <string>
#include <map>
#include "./../src/ProcesadorTransacciones.h"
#include "ProveedorTipoCambioPrueba.h"
#include "ProveedorTransaccionesPendientesPrueba.h"

using namespace std;

namespace
{
    TEST(ProcesadorTransacciones_Test, Test_SumaTransaccionesPendientes)
    {
        /// AAA

        // Arrange - configurar el escenario
        // Proveedor Tipo de Cambio
        map<string, float> tipoCambioPorMoneda {};
        tipoCambioPorMoneda.insert(std::pair<string,float>("USD", 634.25));
        tipoCambioPorMoneda.insert(std::pair<string,float>("CRC", 1));

        ProveedorTipoCambio *proveedorTipoCambio = new ProveedorTipoCambioPrueba(tipoCambioPorMoneda);

        // Proveedor Transacciones Pendientes
        vector<Transaccion> transaccionesPrueba;

        Transaccion transaccion1 {1000, "USD"};
        transaccionesPrueba.push_back(transaccion1);

        Transaccion transaccion2 {500, "CRC"};
        transaccionesPrueba.push_back(transaccion2);

        ProveedorTransaccionesPendientes *proveedorTransaccionesPendientes = new ProveedorTransaccionesPendientesPrueba(transaccionesPrueba);


        int idPersona;
        ProcesadorTransacciones *procesador = new ProcesadorTransacciones(proveedorTipoCambio, proveedorTransaccionesPendientes);
        float esperado = 634750;

        // Act - ejecute la operación
        float actual = procesador->ObtenerSumaTransaccionesPendientes(idPersona);

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);

        delete proveedorTransaccionesPendientes;
        delete proveedorTipoCambio;

        delete procesador;
    }

}