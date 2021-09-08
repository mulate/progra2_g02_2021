#include <string>
#include <sstream>
#include <iostream>

int cuentaPalabras(std::string stringEntrada)
{
    std::istringstream stream(stringEntrada); 
    std::string palabra; 
  
    int conteoPalabras = 0;
    while (stream >> palabra)
    {
        conteoPalabras++;
    }
    return conteoPalabras;
}
  
// Driver code
int main()
{
    std::string textoEntrada = "geeks for geeks geeks contribution placements";

    int wordCount = cuentaPalabras(textoEntrada);

    std::ostringstream streamSalida {};

    streamSalida << "Este es el texto que estamos armando para la salida. " << std::endl;
    streamSalida << std::endl;
    streamSalida << "El número de palabras para \"" << textoEntrada << "\" es: ";
    streamSalida << wordCount << std::endl;

    std::cout << streamSalida.str();

    return 0;
}