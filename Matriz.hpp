class Matriz{
    public:
    Matriz(int ,int );
    const int getFila()const;
    const int getColumna()const;
    const float  getNumero(int ,int )const;




    private:
    int fila,columna;
    float **matriz;

};