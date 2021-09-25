#include <map>
#include "arbol.h"
#include "nodo.h"
#include <string>
#include <sstream>

Arbol::Arbol() {
    this->raiz = nullptr;
}

Arbol::~Arbol() {

    // Este destructor arranca el proceso de destrucción de los nodos;
    if (this->raiz != nullptr)
    {
        delete this->raiz;
    }

}


void Arbol::AgregarNodo(int id, int valor, int idPadre)
{
    Nodo *nodo = new Nodo(id, valor);

    // Si idPadre = 0, es el nodo raíz
    if (idPadre == 0)
    {
        this->raiz = nodo;   
    }
    else
    {
        // Buscar ese nodo padre
        Nodo *nodoPadre = this->elementos.at(idPadre);
        nodoPadre->AgregarHijo(nodo);        
    }

    // Agregar nodo al índice
    this->elementos.insert(std::pair<int,Nodo *>(id, nodo));
}

std::ostream& operator << (std::ostream &o, const Arbol &arbol)
{
    Nodo* raiz = arbol.raiz;
    o << *(raiz);

    return o;
}

std::istream& operator >> (std::istream &i, Arbol &arbol)
{
    std::string linea {""};

    int idNodo {0};
    int valor {0};
    int idPadre {0};

    while (std::getline(i, linea)) {
        
        idNodo = 0;
        valor = 0;
        idPadre = 0;

        std::istringstream stream(linea); 
        stream >> idNodo >> valor >> idPadre;

        arbol.AgregarNodo(idNodo, valor, idPadre);
    }

    return i;

}