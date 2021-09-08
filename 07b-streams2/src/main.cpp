#include "planilla.h"
#include "empleadoPorHoras.h"
#include "empleadoAsalariado.h"

#include <iostream>
#include <fstream>
#include <sstream>

int main() {

    EmpleadoPorHoras *empleado1 = new EmpleadoPorHoras("Juan Perez", "1", 20.5);
    EmpleadoAsalariado *empleado2 = new EmpleadoAsalariado("María Castro", "2", 2500);

    Planilla planilla {};
    planilla.AgregarEmpleado(empleado1);
    planilla.AgregarEmpleado(empleado2);

    // Opción 1
    std::cout << planilla;


    // Opción 2
    /*std::ofstream file("planilla.txt", std::ofstream::out);
    file << planilla;
    file.close();*/

    /*std::ostringstream streamSalida {};
    streamSalida << planilla;
    std::string actual = streamSalida.str();*/

    return 0;
}