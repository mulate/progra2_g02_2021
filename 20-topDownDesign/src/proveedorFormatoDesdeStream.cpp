#include "proveedorFormatoDesdeStream.h"
#include <iostream>
#include <string>


using namespace std;

ProveedorFormatoDesdeStream::ProveedorFormatoDesdeStream(istream *lector) {
    this->lector = lector;
}

string ProveedorFormatoDesdeStream::ObtenerFormato() {

    string linea {}; 
    getline(*(this->lector), linea);

    return linea;
}