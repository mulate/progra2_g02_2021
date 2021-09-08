#include "planilla.h"
#include <iostream>

Planilla::Planilla()
{

}

Planilla::~Planilla()
{
    for (Empleado* empleado : this->empleados)
    {
        delete empleado;
    }
}

void Planilla::AgregarEmpleado(Empleado* nuevoEmpleado)
{
    this->empleados.push_back(nuevoEmpleado);
}

std::ostream& operator << (std::ostream &o, const Planilla &planilla)
{
    o << "Planilla" << std::endl;
    o << "Cantidad de empleados: " << planilla.empleados.size() << std::endl;

    for (Empleado* empleado : planilla.empleados)
    {
        o << *empleado << std::endl;
    }

    return o;
}