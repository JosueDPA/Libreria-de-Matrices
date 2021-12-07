#include"Matriz.hpp"
#ifndef INVERSA
#define INVERSA

class Inversa:public Matriz{
       public:
        Inversa(int ,int );
        float setI();
        const float getI();






       private:
       float **I;

};
#endif