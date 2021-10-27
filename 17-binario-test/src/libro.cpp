#include "libro.h"
#include <string>

using namespace std;

Libro::Libro(int id, string nombreLibro, string isbnLibro) {
    this->id = id;

    strcpy(this->nombre, nombreLibro.c_str());
    strcpy(this->isbn, isbnLibro.c_str());
}

    
Libro::Libro() {
    this->id = 0;    
    strcpy(this->nombre, "");
    strcpy(this->isbn, "");
}
