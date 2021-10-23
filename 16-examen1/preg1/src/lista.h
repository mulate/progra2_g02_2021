#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "nodo.h"

using namespace std;

class Lista {
    Nodo *primerNodo;

    public:
    Lista();
    ~Lista();

    void AgregarValor(int nuevoValor);
    friend ostream& operator << (ostream &o, const Lista &lista);
};

#endif