#include "empleadoPorHoras.h"
#include <iostream>

EmpleadoPorHoras::EmpleadoPorHoras(std::string nombreCompleto, std::string id, float tarifa)
{
    this->id = id;
    this->nombreCompleto = nombreCompleto;
    this->tarifaPorHoras = tarifa;
}

std::ostream& EmpleadoPorHoras::serializar(std::ostream& o) const {
    o << "Empleado por horas (" << this->id << "): ";
    o << this->nombreCompleto << " con tarifa por horas de $" << this->tarifaPorHoras;

    return o;
}
