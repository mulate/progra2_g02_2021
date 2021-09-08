#include <fstream>
#include <iostream>

int main()
{
    // Primer ejemplo. Línea por línea
    std::ifstream ifs("texto1.txt", std::ifstream::in);

    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo texto1.txt" << std::endl;
        return -1;
    }

    std::string linea {}; 
    int contadorLinea {0};
    while (std::getline(ifs, linea)) {

        contadorLinea++;
        std::cout << "Línea " << contadorLinea << ": " << linea << std::endl;
    }

    // Importante!
    ifs.close();

    return 0;
}
