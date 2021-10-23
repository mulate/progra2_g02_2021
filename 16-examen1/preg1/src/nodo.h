#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

class Nodo {

    int valor;
    Nodo *siguiente;

    public:
    Nodo(int nuevoValor);

    Nodo* ObtenerSiguiente();
    void AsignarSiguiente(Nodo *siguiente);

    friend ostream& operator << (ostream &o, const Nodo &nodo);    
};

#endif