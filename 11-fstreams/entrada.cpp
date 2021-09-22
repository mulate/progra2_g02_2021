#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    std::ifstream ifs("ejemplo.txt", std::ifstream::in);
    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo ejemplo.txt" << std::endl;
        return -1;
    }

    // Leer línea por línea 
    string linea {""};

    int numero1 {0};
    int numero2 {0};
    int numero3 {0};
    string nombre {""};

    
    while (std::getline(ifs, linea)) {

        try
        {
            // Procesamos la línea
            std::istringstream stream(linea);

            numero1 = 0;
            numero2 = 0;
            numero3 = 0;
            nombre = "";

            stream >> numero1 >> numero2 >> numero3 >> nombre;

            // Revisar si línea es válida
            if (nombre.length() == 0)
            {
                string error = "Error en línea \"" + linea + "\". Nombre no puede ser vacío.";
                throw error;
            }

            cout << "Línea de " << nombre << " es correcta." << endl;
        }
        catch (string &excepcion)
        {
            cerr << excepcion << endl;
        }
    }

    
    ifs.close();

    return 0;
}