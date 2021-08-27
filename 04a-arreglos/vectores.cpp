#include <iostream>
#include <vector>

int main() {

    try
    {
        std::vector<int> notas;
        //std::vector<int> notas (5); // Tamaño mínimo
        //std::vector<int> notas (5, 100); // Tamaño mínimo y valor inicial

        notas.push_back(100);
        notas.push_back(90);
        notas.push_back(95);
        notas.push_back(90);
        notas.push_back(100);

        std::cout << "El primer elemento es " << notas.at(0) << std::endl;
        std::cout << "El tercer elemento es " << notas.at(3) << std::endl;
        // std::cout << "El décimo elemento es " << notas.at(10) << std::endl;
   
        // Iterar sobre elementos
        for (int nota : notas)
        {
            std::cout << "La nota es " << nota << std::endl;
        }

    }
    catch(const std::exception& e)
    {
        std::cerr << std::endl << "Falla en " << e.what() << "!\n";
    }

}