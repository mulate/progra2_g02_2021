#ifndef EMPLEADOPORHORAS_H
#define EMPLEADOPORHORAS_H

#include <string>
#include "empleado.h"

class EmpleadoPorHoras : public Empleado {
    
    float tarifaPorHoras;
    
    protected:
    virtual std::ostream& serializar(std::ostream& out) const;

    public:
    EmpleadoPorHoras(std::string, std::string, float);
    
};

#endif