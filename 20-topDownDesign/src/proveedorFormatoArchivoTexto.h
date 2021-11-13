#ifndef PROVEEDORFORMATOARCHIVOTEXTO_H
#define PROVEEDORFORMATOARCHIVOTEXTO_H

#include "proveedorFormato.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class ProveedorFormatoArchivoTexto : public ProveedorFormato
{
    istream *lector;

    public:
    ProveedorFormatoArchivoTexto(istream *lector);

    virtual string ObtenerFormato();

};


#endif