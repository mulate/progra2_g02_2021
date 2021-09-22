#ifndef ExcepcionValorEntradaInvalido_H
#define ExcepcionValorEntradaInvalido_H

#include <exception>
#include <string>

class ExcepcionValorEntradaInvalido : public std::exception
{
    std::string mensajeExcepcion;

    public:
    ExcepcionValorEntradaInvalido(std::string mensaje) noexcept {
        this->mensajeExcepcion = mensaje;
    };
    ~ExcepcionValorEntradaInvalido() = default;

    virtual const char* what() const noexcept {
        const char* mensaje = mensajeExcepcion.c_str();
        return mensaje;
    }

};

#endif