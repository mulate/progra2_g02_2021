#ifndef UNIT_TEST

#include "procesadorInstrucciones.h"
#include "identificadorOperaciones.h"
#include "operacionHola.h"

#include <iostream>
#include <string>
#include "proveedorFormato.h"

using namespace std;

int main() {

    try {
        // Configuración de la inyección de dependencias
        map<string, Operacion *> operaciones {};
        ProveedorFormato *proveedorFormato = nullptr;

        OperacionHola *operacionHola = new OperacionHola(proveedorFormato);
        operaciones.insert(std::pair<string, Operacion *>("hola", operacionHola));

        IdentificadorOperacionesBase *identificadorOperaciones = new IdentificadorOperaciones(operaciones);

        
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