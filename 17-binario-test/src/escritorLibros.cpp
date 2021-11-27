#include "escritorLibros.h"
#include "./excepciones/excepcionNoSePuedeAbrirArchivo.h"

using namespace std;

EscritorLibros::EscritorLibros(std::string nombre) {

    archivoSalida.open(nombre, ios::out|ios::binary);

    if (!archivoSalida.is_open())
    {
        throw ExcepcionNoSePuedeAbrirArchivo();
    }
}

void EscritorLibros::AgregarLibro(Libro &libro) {
    archivoSalida.write((char *) &libro, sizeof(Libro));
}

void EscritorLibros::Cerrar() {
    archivoSalida.close();
}
