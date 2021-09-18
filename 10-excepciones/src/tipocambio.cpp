#include "tipocambio.h"
#include "calculadora.h"
#include <string>
#include <iostream>

TipoCambio::TipoCambio(float compra, float venta)
{
    /*if (compra == 0)
    {
        std::string error {"Compra no puede ser 0."};
        throw error;
    }

    if (venta == 0)
    {
        std::string error {"Venta no puede ser 0."};
        throw error;
    }*/

    this->cambio_compra = compra;
    this->cambio_venta = venta;
}

float TipoCambio::CalcularCompraDolares(float colones) 
{
    Calculadora calculadora {};
    float resultado = 0;

    resultado = calculadora.Dividir(colones, this->cambio_venta);     
   
    return resultado;
}