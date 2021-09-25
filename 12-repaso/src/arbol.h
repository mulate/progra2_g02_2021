#ifndef ARBOL_H
#define ARBOL_H

#include "nodo.h"
#include <map>
#include <iostream>

class Arbol {

    Nodo *raiz;
    std::map<int, Nodo *> elementos;

    public:
    Arbol();
    ~Arbol();
    void AgregarNodo(int id, int valor, int idPadre);

    friend std::ostream& operator << (std::ostream &o, const Arbol &arbol);
    friend std::istream& operator >> (std::istream &i, Arbol &arbol);
};


#endif