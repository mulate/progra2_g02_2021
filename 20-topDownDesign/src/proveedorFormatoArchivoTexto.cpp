#include "proveedorFormatoArchivoTexto.h"
#include <iostream>
#include <string>


using namespace std;

ProveedorFormatoArchivoTexto::ProveedorFormatoArchivoTexto(istream *lector) {
    this->lector = lector;
}

string ProveedorFormatoArchivoTexto::ObtenerFormato() {

    string linea {}; 
    getline(*(this->lector), linea);

    return linea;
}