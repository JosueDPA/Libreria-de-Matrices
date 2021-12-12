#include"Matriz.hpp"
#ifndef TRAINGULAR
#define TRAINGULAR
class Traingular:public Matriz{
    public:
     Traingular(int ,int );
     float LLenar();
     float Trans();
    private:
      int N;
};
#endif