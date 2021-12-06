#include"Matriz.hpp"
#include<iostream>
using std::istream;
using std::ostream;
#ifndef COMPLEJA
#define COMPLEJA

class Compleja:public Matriz{
       friend istream &operator>>(istream &,Compleja &);
       friend ostream &operator<<(ostream &,Compleja &);
       friend Compleja &operator+(Compleja &,Compleja &);
       friend Compleja &operator-(Compleja &,Compleja &);
       friend Compleja &operator*(Compleja &,Compleja &);
       friend Compleja &operator*(Compleja &,float &);
       public:
        Compleja(int ,int );
        Compleja(Compleja &,Matriz &);
        
        const float getImg(int , int )const;
        float setIM(int ,int );
        float SetIMG(int ,int ,float );
        


       private:
        float **img;
};
#endif