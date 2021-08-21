#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string input;
    cout << "Ingrese su nombre: ";
    cin >> input;
    cout << "Hola " << input << endl;

    string output = "Hola " + input;
    
    return 0;
}