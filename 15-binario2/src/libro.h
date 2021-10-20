#ifndef LIBRO_H
#define LIBRO_H

#include <string>

using namespace std;

class Libro
{
    int id;
    char nombre[50];
    char isbn[13];

    public:
    Libro(int id, string nombreLibro, string isbnLibro);
    Libro();
};


#endif