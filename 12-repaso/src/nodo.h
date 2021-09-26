#ifndef NODO_H
#define NODO_H

#include <vector>
#include <iostream>

class Nodo {

    int id;
    int valor;
    std::vector<Nodo *> hijos;
    
    public:
    Nodo(int id, int valor);
    ~Nodo();

    void AgregarHijo(Nodo *hijo);

    friend std::ostream& operator << (std::ostream &o, const Nodo &nodo);
};

#endif