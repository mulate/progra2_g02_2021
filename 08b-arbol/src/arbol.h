#ifndef ARBOL_H
#define ARBOL_H

#include "nodo.h"
#include <map>

class Arbol {

    Nodo *raiz;
    std::map<int, Nodo *> elementos;

    public:
    Arbol(int id, int valor);
    ~Arbol();
    void AgregarNodo(int id, int valor, int idPadre);

    friend std::ostream& operator << (std::ostream &o, const Arbol &arbol);
};


#endif