#include "tipocambio.h"
#include "calculadora.h"
#include <string>
#include <iostream>
#include "ExcepcionValorEntradaInvalido.h"

TipoCambio::TipoCambio(float compra, float venta)
{
    if (compra == 0)
    {
        throw ExcepcionValorEntradaInvalido("Compra no puede ser 0.");
    }

    if (venta == 0)
    {
        throw ExcepcionValorEntradaInvalido("Venta no puede ser 0.");
    }

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