#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

int main() {

    std::ifstream ifs("texto.txt", std::ifstream::in);
    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo texto.txt" << std::endl;
        return -1;
    }

    std::ofstream ofs("salida.txt", std::ifstream::out);
    if (!ofs.is_open())
    {
        std::cerr << "Error abriend archivo salida.txt" << std::endl;
        return -1;
    }

    // Leer línea por línea 
    string linea {""};

    int contadorLineas = 0;

    while (std::getline(ifs, linea)) {
        contadorLineas++;

        std::istringstream stream(linea); 
        std::string palabra; 
    
        int conteoPalabras = 0;
        while (stream >> palabra)
        {
            if (palabra.size() >= 4) {
                ofs << palabra << " " << palabra.size() << endl;
            }
        }

    }

    ofs << "Cantidad de líneas: " << contadorLineas << endl;

    ifs.close();
    ofs.close();

    return 0;
}