#include <map>
#include "arbol.h"
#include "nodo.h"

Arbol::Arbol(int id, int valor) {

    Nodo *nodoRaiz = new Nodo(id, valor);
    this->raiz = nodoRaiz;

    this->elementos.insert(std::pair<int,Nodo *>(id, nodoRaiz));
}

Arbol::~Arbol() {

    // Este destructor arranca el proceso de destrucción de los nodos;
    delete this->raiz;

}


void Arbol::AgregarNodo(int id, int valor, int idPadre)
{
    Nodo *nodo = new Nodo(id, valor);

    // Buscar ese nodo padre
    Nodo *nodoPadre = this->elementos.at(idPadre);
    nodoPadre->AgregarHijo(nodo);

    // Agregar nodo al índice
    this->elementos.insert(std::pair<int,Nodo *>(id, nodo));
}

std::ostream& operator << (std::ostream &o, const Arbol &arbol)
{
    Nodo* raiz = arbol.raiz;
    o << *(raiz);

    return o;
}