#include <iostream>
#include "fraccion.h"

int main() {

    Fraccion medio {1, 2};
    Fraccion dos_cuartos {2, 4};

    Fraccion nueva = 2;

    Fraccion x = medio;

    cout << medio.ToString() << endl;
    cout << dos_cuartos.ToFloat() << endl;

    float pruebaFloat = 0.5;

    if (medio == pruebaFloat)
    {
        cout << "Iguales" << endl;
    }
    else
    {
        cout << "Diferentes";
    }
    
    Fraccion tercio = {1, 3};
    Fraccion base = {1, 2};

    base += tercio;
    cout << base << endl;

    Fraccion resultadoMultiplicacion = tercio * base;
    cout << resultadoMultiplicacion << endl;
    

    return 0;
}

