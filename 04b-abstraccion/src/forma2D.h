#ifndef FORMA2D_H
#define FORMA2D_H

#include <string>

class Forma2D {
    
    protected:
    Forma2D() { }

    public:
    ~Forma2D() {}
    virtual float CalculoArea() = 0;  
    virtual std::string ObtenerNombre() = 0;  
};

#endif