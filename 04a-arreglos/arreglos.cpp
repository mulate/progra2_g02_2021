#include <iostream>

int main() {

    const int notas[5] = { 100, 90, 95, 90, 100 };

    std::cout << "El primer elemento es " << notas[0] << std::endl;
    std::cout << "El tercer elemento es " << notas[3] << std::endl;
    // std::cout << "El décimo elemento es " << notas[10] << std::endl;

    // notas[2] = 75;

    int valores[5];
    valores[2] = 75;
    std::cout << "El primer elemento sin inicializar es " << valores[0] << std::endl;

}