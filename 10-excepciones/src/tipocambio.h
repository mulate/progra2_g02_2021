#ifndef TIPOCAMBIO_H
#define TIPOCAMBIO_H

class TipoCambio {

    float cambio_compra;
    float cambio_venta;

    public:
    TipoCambio(float compra, float venta);

    float CalcularCompraDolares(float colones);

};

#endif