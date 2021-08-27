#include <iostream>
#include <string>

int main() {

    // IF y AND
    int total = 7;

    if (total >= 5 && total < 10)
    {
        std::cout << "Total es mayor o igual que 5 pero menor que 10" << std::endl;
    }

    // Enums y switch
    enum class TipoCarta { Diamantes, Corazones, Treboles, Espadas };
    TipoCarta tipo = TipoCarta::Corazones;

    switch (tipo) {
        case TipoCarta::Corazones:
            std::cout << "Es una carta de corazones!" << std::endl;
            break;
        case TipoCarta::Diamantes:
            std::cout << "Es una carta de diamantes!" << std::endl;
            break;
        default:
            std::cout << "No sé el tipo de la carta" << std::endl;
            break;
    }
    

}