
#ifndef UNIT_TEST

#include <iostream>
#include "arbol.h"
#include <fstream>
#include <string>

int main() {

    std::ifstream ifs("arbol.txt", std::ifstream::in);
    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo arbol.txt" << std::endl;
        return -1;
    }

    Arbol *arbol = new Arbol();    
    
    ifs >> *arbol;

    std::cout << *arbol;

    delete arbol;

    return 0;
}

#endif