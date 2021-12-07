#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
#include<stdlib.h>
#include"Inversa.hpp"

Inversa::Inversa(int fila,int columna):Matriz(fila,columna){
    I= new float*[fila];
    for(int i=0;i<fila;i++){
        I[i]= new float[columna];
    }
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            if(i==j){
                I[i][j]=1;
            }
            else{
                I[i][j]=0;
            }
        }
    }
}
