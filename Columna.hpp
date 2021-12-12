#include"Matriz.hpp"
#ifndef COLUMNA
#define COLUMNA
class Columna:public Matriz{
    public:
    Columna(int );
    
    float LLenar();
    float Trans();
};
#endif
