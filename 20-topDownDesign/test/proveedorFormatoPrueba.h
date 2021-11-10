#ifndef ProveedorFormatoPrueba_H
#define ProveedorFormatoPrueba_H

#include "./../src/proveedorFormato.h"
#include <string>

using namespace std;

class ProveedorFormatoPrueba : public ProveedorFormato {

    string formatoAUtilizar;

    public:
    ProveedorFormatoPrueba(string formatoAUtilizar) {
        this->formatoAUtilizar = formatoAUtilizar;
    }

    virtual string ObtenerFormato() {
        return this->formatoAUtilizar;
    }

};

#endif