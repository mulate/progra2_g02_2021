#ifndef PROVEEDORFORMATOARCHIVOTEXTO_H
#define PROVEEDORFORMATOARCHIVOTEXTO_H

#include "proveedorFormato.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class ProveedorFormatoDesdeStream : public ProveedorFormato
{
    istream *lector;

    public:
    ProveedorFormatoDesdeStream(istream *lector);

    virtual string ObtenerFormato();

};


#endif