#ifndef EscritorLibros_H
#define EscritorLibros_H

#include <string>
#include "libro.h"

class EscritorLibros {

    std::string nombreArchivo;

    public:
    EscritorLibros(std::string nombre);
    
    void AgregarLibro(Libro libro);
    void Cerrar();

};

#endif