#ifndef PLANILLA_H
#define PLANILLA_H

#include <vector>
#include <iostream>
#include "empleado.h"

class Planilla {
    
    std::vector<Empleado *> empleados;

    public:
    Planilla();
    ~Planilla();

    void AgregarEmpleado(Empleado *nuevoEmpleado);

    friend std::ostream& operator << (std::ostream &o, const Planilla &planilla);
};

#endif