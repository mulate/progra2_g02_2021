
#ifndef UNIT_TEST

#include <iostream>
#include "calculadora.h"
#include <string>
#include "tipocambio.h"
#include "ExcepcionDivideEntreCero.h"
#include "ExcepcionValorEntradaInvalido.h"

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
        std::cerr << "Catch en main de la excepción divide entre 0: " << excepcion.what() << '\n';
    }
    catch(const ExcepcionValorEntradaInvalido& excepcion)
    {
        std::cerr << "Catch en main de la excepción de entrada inválido en el tipo de cambio: " << excepcion.what() << '\n';
    }
    catch(const exception& excepcion)
    {
        std::cerr << "Catch en main de la excepción desconocida: " << excepcion.what() << '\n';
    }
    return 0;
}

#endif