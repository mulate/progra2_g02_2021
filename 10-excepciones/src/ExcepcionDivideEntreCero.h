#ifndef ExcepcionDivideEntreCero_H
#define ExcepcionDivideEntreCero_H

#include <exception>

class ExcepcionDivideEntreCero : public std::exception
{
    public:
    ExcepcionDivideEntreCero() noexcept = default;
    ~ExcepcionDivideEntreCero() = default;

    virtual const char* what() const noexcept {
        return "No se puede dividir entre cero";
    }

};

#endif