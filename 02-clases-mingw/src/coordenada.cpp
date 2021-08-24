#include "coordenada.h"
#include <iostream>
#include <string>

using namespace std;

Coordenada::Coordenada(int punto_x, int punto_y) {
    x = punto_x;
    y = punto_y;
}

string Coordenada::ToString() {
    return "(" + to_string(x) + ", " + to_string(y) + ")";
}