#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main()
{
    cout << boolalpha; // representación textual de valores booleanos
 
    cout << "max(short): " << numeric_limits<short>::max() << endl;
    cout << "Tamaño de short: " << sizeof(short) << endl;
    cout << "max(int): " << numeric_limits<int>::max() << endl;
    cout << "Tamaño de int: " << sizeof(int) << endl;
    cout << "max(long): " << numeric_limits<long>::max() << endl; 
    cout << "Tamaño de long: " << sizeof(long) << endl;

    cout << "max(float): " << numeric_limits<float>::max() << endl; 
    cout << "Tamaño de float: " << sizeof(float) << endl;
    cout << "max(double): " << numeric_limits<double>::max() << endl; 
    cout << "Tamaño de double: " << sizeof(double) << endl;
    cout << "max(long double): " << numeric_limits<long double>::max() << endl; 
    cout << "Tamaño de long double: " << sizeof(long double) << endl;
 
    cout << "is_signed(char): " << numeric_limits<char>::is_signed << endl;
    cout << "Tamaño de char: " << sizeof(char) << endl;
    cout << "is_specialized(string): " << numeric_limits<string>::is_specialized << endl;
 
    return EXIT_SUCCESS;
}