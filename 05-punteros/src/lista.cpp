#ifndef LISTA_CPP
#define LISTA_CPP

#include "lista.h"

template <class T>
Lista<T>::Lista() {
    // Inicializar a nulo
    this->primerNodo = nullptr;
}

template <class T>
Lista<T>::~Lista() {

    if (this->primerNodo == nullptr)
    {
        // La lista está vacía
        return;
    }

    // Destruir los nodos
    Lista<T>::Nodo* nodoActual = this->primerNodo;

    while (nodoActual != nullptr)
    {
        Lista<T>::Nodo* nodoSiguiente = nodoActual->next;
        delete nodoActual;
        nodoActual = nodoSiguiente;
    }
}

template <class T>
void Lista<T>::AgregarElementoAlFinal(T nuevoElemento) {
    
    // Inicializar nuevo nodo
    Lista<T>::Nodo *nuevoNodo = new Lista<T>::Nodo();
    nuevoNodo->valor = nuevoElemento;
    nuevoNodo->next = nullptr;

    // Iterar sobre los nodos hasta llegar al último
    Lista<T>::Nodo *iterador = this->primerNodo;

    // Si no existe ningún nodo, lo establece como el primer nodo
    if (this->primerNodo == nullptr)
    {    
        this->primerNodo = nuevoNodo;
        return;
    }

    // Iterar hasta el final de la lista (next es nulo)
    while (iterador->next != nullptr)
    {
        iterador = iterador->next;
    }

    // Conectar el nodo al final de la lista
    iterador->next = nuevoNodo;

}

template <class T>
T Lista<T>::ObtenerElemento(int posicion) {

    Lista<T>::Nodo *iterador = this->primerNodo;
    
    if (iterador == nullptr)
    {
        throw "La lista está vacía";
    }

    for (int contador = 0; contador < posicion; contador++)
    {
        if (iterador->next == nullptr)
        {
            throw "La posición solicitada se sale de los límites";
        }

        iterador = iterador->next;
    }

    return iterador->valor;
}

#endif
//template class Lista<int>;