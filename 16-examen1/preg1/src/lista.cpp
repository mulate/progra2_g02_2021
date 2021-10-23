#include "lista.h"

Lista::Lista() {
    this->primerNodo = nullptr;
}

Lista::~Lista() {

    /*Nodo *iterador = primerNodo;


    while (iterador != primerNodo)
    {
        Nodo* siguiente = iterador->ObtenerSiguiente();
        delete iterador;

        iterador = siguiente;
    }*/

}

void Lista::AgregarValor(int nuevoValor) {

    Nodo *nuevoNodo = new Nodo(nuevoValor);

    if (primerNodo == nullptr)
    {
        // Está vacía la lista
        primerNodo = nuevoNodo;    
    }
    else
    {
        Nodo *iterador = primerNodo;

        while (iterador->ObtenerSiguiente() != primerNodo)
        {
            iterador = iterador->ObtenerSiguiente();
        }

        // Voy a estar ubicado en el último
        iterador->AsignarSiguiente(nuevoNodo);
    }

    nuevoNodo->AsignarSiguiente(primerNodo);
}

ostream& operator << (ostream &o, const Lista &lista)
{
    if (lista.primerNodo == nullptr)
    {
        // Si lista está vacía
        return o;
    }

    Nodo *iterador = lista.primerNodo;

    o << *(iterador);

    while (iterador->ObtenerSiguiente() != lista.primerNodo)
    {
        iterador = iterador->ObtenerSiguiente();
        o << "," << *(iterador);
    }

    o << ",...";

    return o;
}