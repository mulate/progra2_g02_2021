#include <iostream>
#include "arbol.h"

int main() {

    Arbol *arbol = new Arbol(1, 2);
    arbol->AgregarNodo(2, 7, 1);
    arbol->AgregarNodo(450, 10, 1);
    arbol->AgregarNodo(301, 70, 450);
    arbol->AgregarNodo(760, 17, 450);
    arbol->AgregarNodo(130, 45, 450);

    std::cout << *arbol;

    delete arbol;

    return 0;
}