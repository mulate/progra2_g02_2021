#ifndef ProveedorFormatoPrueba_H
#define ProveedorFormatoPrueba_H

#include "../src/proveedorFormato.h"

#include <string>

using namespace std;

class ProveedorFormatoPrueba : public ProveedorFormato {

    string formato;

    public:
    ProveedorFormatoPrueba(string formatoAUtilizar) {
        this->formato = formatoAUtilizar;
    }

    virtual string ObtenerFormato() {
        return this->formato;
    }

};

#endif