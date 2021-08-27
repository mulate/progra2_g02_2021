#ifndef CUADRADO_H
#define CUADRADO_H

#include "forma2D.h"
#include <string>

class Cuadrado : public Forma2D {

    float lado;

    public:
        Cuadrado(float);
        virtual float CalculoArea(); 
        virtual std::string ObtenerNombre();
};

#endif