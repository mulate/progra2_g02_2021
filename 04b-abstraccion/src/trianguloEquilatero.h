#ifndef TRIANGULOEQUILATERO_H
#define TRIANGULOEQUILATERO_H

#include "forma2D.h"
#include <string>

class TrianguloEquilatero : public Forma2D {

    float lado;

    public:
        TrianguloEquilatero(float);
        virtual float CalculoArea(); 
        virtual std::string ObtenerNombre();
};

#endif