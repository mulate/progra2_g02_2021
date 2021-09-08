#include "empleadoAsalariado.h"

EmpleadoAsalariado::EmpleadoAsalariado(std::string nombreCompleto, std::string id, float salario)
{
    this->id = id;
    this->nombreCompleto = nombreCompleto;
    this->salario = salario;
}

std::ostream& EmpleadoAsalariado::serializar(std::ostream& o) const {
    o << "Empleado asalariado (" << this->id << "): ";
    o << this->nombreCompleto << " con salario de $" << this->salario;

    return o;
}
