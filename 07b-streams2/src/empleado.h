#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
    
    protected:
    std::string nombreCompleto;
    std::string id;
    
    virtual std::ostream& serializar(std::ostream& out) const;

    Empleado() { }

    public:
    ~Empleado() {}

    friend std::ostream& operator << (std::ostream &o, const Empleado &empleado);
};

#endif