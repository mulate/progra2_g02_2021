#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Ingrese su nombre y apellidos y su edad:" << endl; 

    string nombre {};
    string apellido1 = {};
    string apellido2 = {};
    int edad = 0;

    cin >> nombre >> apellido1 >> apellido2 >> edad;

    cout << "Su nombre es:" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido-1: " << apellido1 << endl;
    cout << "Apellido-2: " << apellido2 << endl;
    cout << "Edad: " << edad << endl;

    return 0;
}