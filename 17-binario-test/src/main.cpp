#include <iostream>
#include <fstream>

#include "libro.h"
#include "escritorLibros.h"
#include "string.h"

using namespace std;

int main() {

    Libro libro1 { 1, "Nombre 1", "1234567890123" };
    Libro libro2 { 2, "Nombre 2", "6549874561232" };
    Libro libro3 { 3, "Nombre 3", "9873124562134" };

    EscritorLibros archivoSalida {"libros.dat"};
    archivoSalida.AgregarLibro(libro1);
    archivoSalida.Cerrar();


    // Ejemplo 1: Escribir archivo
    ofstream archivoSalida;

    archivoSalida.open("libros.dat", ios::out|ios::binary);

    if (!archivoSalida.is_open())
    {
        cerr << "No se pudo abrir archivo libros.dat para escribir los datos";
        return -1;
    }



    archivoSalida.write((char *) &libro1, sizeof(Libro));
    archivoSalida.write((char *) &libro2, sizeof(Libro));
    archivoSalida.write((char *) &libro3, sizeof(Libro));

    archivoSalida.close();

    // Ejemplo 2: Leer archivo
    ifstream archivoEntrada;
    archivoEntrada.open("libros.dat", ios::in|ios::binary);

    if (!archivoEntrada.is_open())
    {
        cerr << "No se pudo abrir archivo libros.dat para leer los datos";
        return -1;
    }

    Libro libro1LeidoDeArchivo;
    Libro libro2LeidoDeArchivo;
    Libro libro3LeidoDeArchivo;

    //archivoEntrada.seekg(sizeof(Libro));
    archivoEntrada.read((char *) &libro1LeidoDeArchivo, sizeof(Libro));
    archivoEntrada.read((char *) &libro2LeidoDeArchivo, sizeof(Libro));
    archivoEntrada.read((char *) &libro3LeidoDeArchivo, sizeof(Libro));

    archivoEntrada.close();

    return 0;

}