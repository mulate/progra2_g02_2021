#include "nodo.h"

Nodo::Nodo(int id, int valor)
{
    this->id = id;
    this->valor = valor;
}

Nodo::~Nodo()
{

}

void Nodo::AgregarHijo(Nodo *hijo) {
    this->hijos.push_back(hijo);
}