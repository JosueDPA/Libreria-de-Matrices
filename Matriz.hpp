
#ifndef MATRIZ
#define MATRIZ
class Matriz{
    public:
    Matriz(int ,int );
    Matriz(Matriz &);
    Matriz();
    const int getFila()const;
    const int getColumna()const;
    const float  getNumero(int ,int )const;
    float setNumero(int ,int );
    float setN(int ,int ,float);




    private:
    int fila,columna;
    float **matriz;

};
#endif