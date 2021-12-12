#include<istream>
using std::ostream;
using std::istream;
#include<ctime>
#ifndef MATRIZ
#define MATRIZ
class Matriz{
    friend istream &operator>>(istream &,Matriz &);
    friend ostream &operator<<(ostream &,Matriz &);
    friend Matriz  &operator +(Matriz  &,Matriz &);
    friend Matriz  &operator -(Matriz  &,Matriz &);
    friend Matriz  &operator *(Matriz  &,Matriz &);
    friend Matriz  &operator *(Matriz  &,float  &);
    
    public:
    Matriz(int ,int );
    Matriz(Matriz &);
    Matriz(int );
	~Matriz();
   
    const int getFila()const;
    const int getColumna()const;
    const float  getNumero(int ,int )const;
    float setN(int ,int );
    float setN(int ,int ,float);
    int setB(int);
    int getB();
    int contar();

    virtual float LLenar();
    virtual float Trans();




    private:
    int fila,columna;
    float **matriz;
    static int b;

};
#endif
