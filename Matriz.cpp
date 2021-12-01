#include<iostream>
#include<string>
#include<stdlib.h>
#include"Matriz.hpp"


Matriz::Matriz(int fila,int columna){
    this->fila=fila;
    this->columna=columna;
    matriz= new float*[fila];
    for(int i=0;i<this->columna;i++){
        matriz[i]= new float[columna];
    }
}
const int Matriz::getColumna()const{
    return this->columna;
}
const int Matriz::getFila()const{
    return this->fila;
}
const float Matriz::getNumero(int i,int j)const{
    return *(*(matriz+i)+j);
}