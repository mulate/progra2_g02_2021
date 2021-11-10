#include <gtest/gtest.h>
#include <string>
#include "./../src/operacionHola.h"
#include "proveedorFormatoPrueba.h"

using namespace std;

namespace {
    TEST(OperacionHola_Test, Test_Formato_Aplicado) {

        ProveedorFormatoPrueba *proveedorFormato = new ProveedorFormatoPrueba("Hola ");
        OperacionHola *operacionHola = new OperacionHola(proveedorFormato);

        string actual = operacionHola->Ejecute("todos");
        string esperado = "Hola todos";

        EXPECT_EQ(esperado, actual);
    }
}