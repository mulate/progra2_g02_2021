#ifndef ExcepcionLibroNoExiste_H
#define ExcepcionLibroNoExiste_H

#include <exception>

class ExcepcionLibroNoExiste : public std::exception
{
    public:
    ExcepcionLibroNoExiste() noexcept = default;
    ~ExcepcionLibroNoExiste() = default;

    virtual const char* what() const noexcept {
        return "Libro no existe";
    }

};

#endif