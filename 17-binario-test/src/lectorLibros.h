#ifndef LECTOR_LIBROS_H
#define LECTOR_LIBROS_H

#include <string>
#include "libro.h"

#include <fstream>

using namespace std;

class LectorLibros {

    ifstream archivoEntrada;

    public:
    LectorLibros(string nombreArchivo);

    Libro ObtenerLibro(int idLibro);
    
    void Cerrar();
};

#endif