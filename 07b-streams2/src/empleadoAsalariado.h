#ifndef EMPLEADOASALARIADO_H
#define EMPLEADOASALARIADO_H

#include <iostream>
#include "empleado.h"

class EmpleadoAsalariado : public Empleado {
    
    float salario;
    
    protected:
    virtual std::ostream& serializar(std::ostream& out) const;

    public:
    EmpleadoAsalariado(std::string, std::string, float);

    
};

#endif