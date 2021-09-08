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

    std::ofstream file("prueba.txt", std::ofstream::out);

    std::string linea {}; 
    int contadorLinea {0};
    while (std::getline(ifs, linea)) {

        contadorLinea++;
        file << "Línea " << contadorLinea << ": " << linea << std::endl;
    }


    // Importante!
    ifs.close();
    file.close();

}
