#include "empleado.h"
#include <iostream>

std::ostream& Empleado::serializar(std::ostream& out) const { 
    return out;
}

std::ostream& operator << (std::ostream &o, const Empleado &empleado)
{
    return empleado.serializar(o);
}