#ifndef UNIT_TEST

#include <iostream>
#include <fstream>

#include "libro.h"
#include "escritorLibros.h"
#include "lectorLibros.h"
#include "string.h"
#include "./excepciones/excepcionLibroNoExiste.h"

using namespace std;

int main() {

    Libro libro1 { 1, "Nombre 1", "1234567890123" };
    Libro libro2 { 2, "Nombre 2", "6549874561232" };
    Libro libro3 { 3, "Nombre 3", "9873124562134" };

    EscritorLibros archivoSalida {"libros.dat"};
    archivoSalida.AgregarLibro(libro1);
    archivoSalida.Cerrar();

    try
    {
        LectorLibros archivoEntrada {"libros.dat"};
        Libro libro = archivoEntrada.ObtenerLibro(5);
        archivoEntrada.Cerrar();        
    }
    catch(const ExcepcionLibroNoExiste& e)
    {
        std::cerr << "Error leyendo el libro solicitado. " << e.what() << '\n';
        return -1;
    }

    return 0;

}

#endif