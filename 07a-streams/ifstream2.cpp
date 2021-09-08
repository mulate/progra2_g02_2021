#include <fstream>
#include <iostream>

int main()
{
    // Segundo ejemplo. Letra por letra
    std::ifstream ifs2("texto2.txt", std::ifstream::in);
    if (!ifs2.is_open())
    {
        std::cerr << "Error leyendo archivo texto2.txt" << std::endl;
        return -1;
    }

    char c = ifs2.get();

    while (ifs2.good())
    {
        std::cout << c;
        c = ifs2.get();
    }

    // Importante!!
    ifs2.close();

    return 0;
}
