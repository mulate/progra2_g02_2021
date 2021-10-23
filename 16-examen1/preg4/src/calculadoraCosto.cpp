#include "calculadoraCosto.h"

CalculadoraCosto::CalculadoraCosto(int idArticulo) {
    this->idArticulo = idArticulo;
}

float CalculadoraCosto::CalcularCosto(float kilogramos) {
    
    switch (this->idArticulo)
    {
        case 1:
            return CalculoArticulo1(kilogramos);
        case 2:
            return CalculoArticulo2(kilogramos);
        case 3:
            return CalculoArticulo3(kilogramos);
        default:
            return 0;
    }

}

float CalculadoraCosto::CalculoArticulo1(float kilogramos) {

    if (kilogramos < 3)
    {
        return 0.345 * kilogramos;
    }

    if (kilogramos < 9)
    {
        return 0.650 * kilogramos;
    }

    return 0.8 * kilogramos;
}

float CalculadoraCosto::CalculoArticulo2(float kilogramos) {

    if (kilogramos < 3)
    {
        return 0.6 * kilogramos;
    }

    if (kilogramos < 8)
    {
        return 0.450 * kilogramos;
    }

    return 0.345 * kilogramos;

}

float CalculadoraCosto::CalculoArticulo3(float kilogramos) {
    return 0.250 * kilogramos;
}


