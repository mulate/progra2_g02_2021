#ifndef UNIT_TEST

#include "procesadorInstrucciones.h"
#include "identificadorOperaciones.h"

#include <iostream>
#include <string>

using namespace std;

int main() {

    try {
        IdentificadorOperacionesBase *identificadorOperaciones = new IdentificadorOperaciones();
        ProcesadorInstrucciones *procesador = new ProcesadorInstrucciones(identificadorOperaciones);
        string resultado = procesador->Procese("hola", "todos");

        cout << "Resultado: " << resultado << endl;

    } catch (char const* exception)
    {
        cerr << "Error: " << exception << endl;
    }

    return 0;
}

#endif