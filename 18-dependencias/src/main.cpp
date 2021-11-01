#include <iostream>
#include "holaMundo.h"

using namespace std;

int main() {

    HolaMundo hola {"Hola "};

    cout << hola.GenerarHolaMundo("a todos") << endl;

    return 0;
}