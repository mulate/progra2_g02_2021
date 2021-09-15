#include "nodo.h"
#include <iostream>

Nodo::Nodo(int id, int valor)
{
    this->id = id;
    this->valor = valor;
}

Nodo::~Nodo()
{
    std::clog << "Borrando nodo " << this->id << std::endl;

    for (Nodo* hijo : this->hijos)
    {
        delete hijo;
    }

    std::clog << "Termina de borrar nodo " << this->id << std::endl;
}

void Nodo::AgregarHijo(Nodo *hijo) {
    this->hijos.push_back(hijo);
}

std::ostream& operator << (std::ostream &o, const Nodo &nodo)
{
    // Imprimir información del nodo
    o << "Nodo: ";
    o << nodo.id;
    o << ". Valor: ";
    o << nodo.valor;
    o << std::endl;

    // Imprimir información de cada hijo
    for (Nodo *nodoHijo : nodo.hijos)
    {
        o << *nodoHijo;
    }

    return o;
}