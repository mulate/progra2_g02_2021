#ifndef ExcepcionNoSePuedeAbrirArchivo_H
#define ExcepcionNoSePuedeAbrirArchivo_H

#include <exception>

class ExcepcionNoSePuedeAbrirArchivo : public std::exception
{
    public:
    ExcepcionNoSePuedeAbrirArchivo() noexcept = default;
    ~ExcepcionNoSePuedeAbrirArchivo() = default;

    virtual const char* what() const noexcept {
        return "No se puede abrir archivo";
    }

};

#endif