#ifndef COORDENADA_H
#define COORDENADA_H

#include <string>

class Coordenada {

    int a {0};
    int b {0};

    public:
    Coordenada(int punto_x, int punto_y);
    
    std::string ToString();
};

#endif