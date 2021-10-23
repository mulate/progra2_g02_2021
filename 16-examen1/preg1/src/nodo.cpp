#include "nodo.h"

Nodo::Nodo(int nuevoValor) {
    this->valor = nuevoValor;
    this->siguiente = nullptr;
}

Nodo* Nodo::ObtenerSiguiente() {
    return this->siguiente;
}

void Nodo::AsignarSiguiente(Nodo *siguiente) {
    this->siguiente = siguiente;
}

ostream& operator << (ostream &o, const Nodo &nodo) {

    o << nodo.valor;

    return o;
}