#include "coordenada.h"
#include <iostream>
#include <string>

using namespace std;

Coordenada::Coordenada(int punto_x, int punto_y) {
    a = punto_x;
    b = punto_y;
}

string Coordenada::ToString() {
    return "(" + to_string(a) + ", " + to_string(b) + ")";
}