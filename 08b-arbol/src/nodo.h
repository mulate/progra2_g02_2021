#ifndef NODO_H
#define NODO_H

#include <vector>

class Nodo {

    int id;
    int valor;
    std::vector<Nodo *> hijos;
    
    public:
    Nodo(int id, int valor);
    ~Nodo();

    void AgregarHijo(Nodo *hijo);
};

#endif