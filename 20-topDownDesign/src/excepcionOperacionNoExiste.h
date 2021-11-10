#ifndef ExcepcionOperacionNoExiste_H
#define ExcepcionOperacionNoExiste_H

#include <exception>

class ExcepcionOperacionNoExiste : public std::exception
{
    public:
    ExcepcionOperacionNoExiste() noexcept = default;
    ~ExcepcionOperacionNoExiste() = default;

    virtual const char* what() const noexcept {
        return "Operación no existe";
    }

};

#endif