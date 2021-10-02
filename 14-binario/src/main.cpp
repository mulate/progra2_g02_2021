#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    std::ifstream ifs("Archive.zip", ios::in | ios::binary);
    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo Archive.zip" << std::endl;
        return -1;
    }
 
    char buffer[100];
    ifs.read(buffer, 100);

    // Buscando el tamaño del nombre del archivo
    ifs.seekg(26);
    char bufferLongitudNombreArchivo1[2];
    ifs.read(bufferLongitudNombreArchivo1, 2);
    int tamanoNombreArchivo1 = (int)bufferLongitudNombreArchivo1[0];

    // Obtener el nombre del archivo
    ifs.seekg(30);
    char bufferNombreArchivo[tamanoNombreArchivo1+1];
    ifs.read(bufferNombreArchivo, tamanoNombreArchivo1);
    bufferNombreArchivo[tamanoNombreArchivo1] = 0;
    string nombreArchivo(bufferNombreArchivo);

    /*// Obtener el tamaño comprimido y sin comprimir
    char bufferTamano[4];
    ifs.seekg(18); // Tamaño comprimido
    ifs.read(bufferTamano, 4);
    ifs.seekg(22); // Tamaño sin comprimir
    ifs.read(bufferTamano, 4);*/


    cout << bufferNombreArchivo << endl;

    ifs.close();

    return 0;
}
