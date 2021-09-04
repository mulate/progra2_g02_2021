#ifndef FRACCION_H
#define FRACCION_H

#include <string>
#include <iostream>

using namespace std;

class Fraccion {
    int numerador;
    int denominador;
    int parteEntera;

    public:
    Fraccion();
    Fraccion(int entero);
    Fraccion(int numerador, int denominador);
    Fraccion(int entero, int numerador, int denominador);
    
    Fraccion(const Fraccion &f); //Copia

    float ToFloat();
    string ToString();

    void operator += (const Fraccion &f); // Suma
    void operator -= (const Fraccion &f); // Resta
    void operator *= (const Fraccion &f); // Multiplicación
    void operator /= (const Fraccion &f); // División

    bool operator == (Fraccion &f); // Comparación
    bool operator == (float &f); // Comparación

    bool operator <= (const Fraccion &f); // Menor que
    bool operator >= (const Fraccion &f); // Mayor que
    bool operator > (const Fraccion &f); // Mayor
    bool operator < (const Fraccion &f); // Menor

    // Friend porque son operaciones no miembros
    friend Fraccion operator + (Fraccion &f1, Fraccion &f2); // Suma
    friend Fraccion operator - (Fraccion &f1, Fraccion &f2); // Resta
    friend Fraccion operator * (Fraccion &f1, Fraccion &f2); // Multiplicación
    friend Fraccion operator / (Fraccion &f1, Fraccion &f2); // División
    
    friend ostream& operator << (ostream &o, const Fraccion &f);
    friend istream& operator >> (istream &o, Fraccion &f);
};

#endif