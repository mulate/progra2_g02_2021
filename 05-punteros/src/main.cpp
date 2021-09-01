#include <iostream>
#include <string>
#include "lista.h"

using namespace std;

int main() {
    
    Lista<int> lista;
    lista.AgregarElementoAlFinal(1);
    lista.AgregarElementoAlFinal(3);
    lista.AgregarElementoAlFinal(5);
    lista.AgregarElementoAlFinal(7);

    int elemento = lista.ObtenerElemento(2);

    return 0;
}