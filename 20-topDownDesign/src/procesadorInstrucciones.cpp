#include "procesadorInstrucciones.h"
#include "operacion.h"
#include <string>

using namespace std;

ProcesadorInstrucciones::ProcesadorInstrucciones(IdentificadorOperacionesBase *identificador) {
    this->identificador = identificador;
}

ProcesadorInstrucciones::~ProcesadorInstrucciones() {

}

string ProcesadorInstrucciones::Procese(string instruccion, string valor) {

    Operacion *operacion = this->identificador->Identifique(instruccion);
    string resultado = operacion->Ejecute(valor);
    return resultado;

}