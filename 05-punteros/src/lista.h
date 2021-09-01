#ifndef LISTA_H
#define LISTA_H

template <class T>
class Lista {

    // Clase interna privada
    struct Nodo {
        T valor;
        Nodo* next;
    };

    // Propiedades
    Nodo* primerNodo;

    public:
    Lista(); // Constructor
    ~Lista(); // Destructor
    
    void AgregarElementoAlFinal(T nuevoElemento);
    T ObtenerElemento(int posicion);

};

#include "lista.cpp"

#endif