
#ifndef UNIT_TEST

#include <iostream>
#include "calculadora.h"
#include <string>
#include "tipocambio.h"
#include "ExcepcionDivideEntreCero.h"

using namespace std;


int main() {

    /*Calculadora calculadora;

    try 
    {
        int resultado = calculadora.Dividir(18, 3);
        cout << "Resultado correcto: " << resultado << endl;
    }
    catch (const std::string &excepcion)
    {
        cerr << "Error: " << excepcion << endl;
    }*/

    try
    {
        TipoCambio tipoCambio { 600.25f, 0 };
        float colones = 10000.00f;
        float dolares = tipoCambio.CalcularCompraDolares(colones);
        cout << "Obtuve $" << dolares << endl;
    }
    catch(const ExcepcionDivideEntreCero& excepcion)
    {
        std::cerr << "Catch en main: " << excepcion.what() << '\n';
    }

    return 0;
}

#endif