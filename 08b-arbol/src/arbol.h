#ifndef ARBOL_H
#define ARBOL_H

#include "nodo.h"
#include <map>

class Arbol {

    Nodo *raiz;
    std::map<int, Nodo *> elementos;

    public:
    Arbol(int id, int valor);
    void AgregarNodo(int id, int valor, int idPadre);

};


#endif