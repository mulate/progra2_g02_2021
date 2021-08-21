#ifndef COORDENADA_H
#define COORDENADA_H

#include <string>

class Coordenada {

    int x {0};
    int y {0};

    public:
    Coordenada(int punto_x, int punto_y);
    
    std::string ToString();
};

#endif