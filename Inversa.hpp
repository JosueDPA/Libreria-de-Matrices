#include<iostream>
using std::istream;
using std::ostream;
#include"Matriz.hpp"
#ifndef INVERSA
#define INVERSA

class Inversa:public Matriz{

       
       public:
        Inversa(int ,int );
        float setI(int ,int );
        float setI(int ,int ,float );
        const float getI(int ,int )const;
        float Metodo();
        float LLenar();






       private:
       float **I;

};
#endif
