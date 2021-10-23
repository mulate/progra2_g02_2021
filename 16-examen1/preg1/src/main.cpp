
#include "lista.h"

int main() {

    Lista lista{};

    lista.AgregarValor(1);
    lista.AgregarValor(2);
    lista.AgregarValor(3);

    cout << lista;

    //delete lista;

    return 0;
}