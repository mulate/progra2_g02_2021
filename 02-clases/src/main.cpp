#include <iostream>
#include "coordenada.h"

int main() {
    Coordenada e = Coordenada(0, 5);
    Coordenada e2 = Coordenada(2, 5);

    std::cout << e.ToString() << std::endl;
    return 0;
}