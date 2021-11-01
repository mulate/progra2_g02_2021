#ifndef EscritorLibros_H
#define EscritorLibros_H

#include <string>
#include <fstream>
#include <iostream>

#include "libro.h"

class EscritorLibros {

    ofstream archivoSalida;

    public:
    EscritorLibros(std::string nombre);
    
    void AgregarLibro(Libro &libro);
    void Cerrar();

};

#endif