
#include "fraccion.h"

Fraccion::Fraccion()
{
    this->parteEntera = 0;
    this->numerador = 0;
    this->denominador = 1;
}

Fraccion::Fraccion(int numerador, int denominador) 
{
    this->parteEntera = 0;
    this->numerador = numerador;
    this->denominador = denominador;
}

Fraccion::Fraccion(int entero, int numerador, int denominador)
{
    this->parteEntera = entero;
    this->numerador = numerador;
    this->denominador = denominador;
}

Fraccion::Fraccion(int entero)
{
    this->parteEntera = entero;
    this->numerador = 0;
    this->denominador = 1;
}

Fraccion::Fraccion(const Fraccion &f) // Constructor de copia
{
    this->parteEntera = f.parteEntera;
    this->numerador = f.numerador;
    this->denominador = f.denominador;
}

float Fraccion::ToFloat() {
    return ((float)this->numerador / (float)this->denominador) + (float)this->parteEntera; 
}
string Fraccion::ToString() {
    return to_string(this->parteEntera) + "[" + to_string(this->numerador) + "/" + to_string(this->denominador) + "]";
}

void Fraccion::operator+= (const Fraccion &f) {
    
    int denominadorNuevo = this->denominador * f.denominador;
    int numerador1 = (denominadorNuevo / this->denominador) * this->numerador;
    int numerador2 = (denominadorNuevo / f.denominador) * f.numerador;
    
    this->numerador = numerador1 + numerador2;
    this->denominador = denominadorNuevo;
}

void Fraccion::operator-= (const Fraccion &f) {
    
    int denominadorNuevo = this->denominador * f.denominador;
    int numerador1 = (denominadorNuevo / this->denominador) * this->numerador;
    int numerador2 = (denominadorNuevo / f.denominador) * f.numerador;
    
    this->numerador = numerador1 - numerador2;
    this->denominador = denominadorNuevo;

}

void Fraccion::operator*= (const Fraccion &f) {
    
    this->numerador *= f.numerador;
    this->denominador *= f.denominador;

}

void Fraccion::operator/= (const Fraccion &f) {
    
    this->numerador /= f.denominador;
    this->denominador /= f.numerador;

}

bool Fraccion::operator== (Fraccion &f) {
    
    //return (this->numerador == f.numerador) && (this->denominador == f.denominador);
    bool resultado = this->ToFloat() == f.ToFloat();
    return resultado;
}

bool Fraccion::operator== (float &f) {
    
    //return (this->numerador == f.numerador) && (this->denominador == f.denominador);
    bool resultado = this->ToFloat() == f;
    return resultado;
}

Fraccion operator+ (Fraccion &f1, Fraccion &f2)
{
    Fraccion resultado = {f1};
    resultado += f2;

    return resultado;
}

Fraccion operator- (Fraccion &f1, Fraccion &f2)
{
    Fraccion resultado = {f1};
    resultado -= f2;

    return resultado;
}

Fraccion operator* (Fraccion &f1, Fraccion &f2)
{
    Fraccion resultado = {f1};
    resultado *= f2;

    return resultado;
}

ostream& operator << (ostream &o, const Fraccion &f)
{
    o << f.parteEntera << "[" << f.numerador << "/" << f.denominador << "]";
    return o;
}