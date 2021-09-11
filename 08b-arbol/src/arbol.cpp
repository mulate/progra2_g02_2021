#include <map>
#include "arbol.h"
#include "nodo.h"

Arbol::Arbol(int id, int valor) {

    Nodo *nuevoNodo = new Nodo(id, valor);
    this->raiz = nuevoNodo;

    this->elementos.insert(std::pair<int,Nodo *>(id, nuevoNodo));

}

void Arbol::AgregarNodo(int id, int valor, int idPadre)
{
    Nodo *nodo = new Nodo(id, valor);

    // Buscar ese nodo padre
    Nodo *nodoPadre = this->elementos.at(idPadre);
    
    nodoPadre->AgregarHijo(nodo);
}