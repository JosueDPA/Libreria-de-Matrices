#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<string>
#include<stdlib.h>
#include<iomanip>
#include<ctime>
#include"Matriz.hpp"


Matriz::Matriz(int fila,int columna){
    this->fila=fila;
    this->columna=columna;
    matriz= new float*[fila];
    for(int i=0;i<this->columna;i++){
        matriz[i]= new float[columna];
    }
}
Matriz::Matriz(){
    this->fila=3;
    this->columna=3;
    matriz= new float*[fila];
    for(int i=0;i<this->columna;i++){
        matriz[i]= new float[columna];
    }
    for(int i=0;i<this->fila;i++){
        for(int j=0;j<this->columna;j++){
            *(*(matriz+i)+j)=0;
        }
    }

}
Matriz::Matriz(Matriz &C1){
    this->fila=C1.fila;
    this->columna=C1.columna;
    matriz= new float*[this->fila];
    for(int i=0;i<this->fila;i++){
        matriz[i]= new float[this->columna];
    }
     for(int i=0;i<fila;i++){
         for(int j=0;j<this->columna;j++){
             matriz[i][j]=C1.getNumero(i,j);
         }
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
float Matriz::setN(int i,int j){
    cin>>*(*(matriz+i)+j);
}
float Matriz::setN(int i,int j,float M){
    *(*(matriz+i)+j)=M;
}
float Matriz::LLenar(){
    srand(time(NULL));
    for(int i=0;i<this->getFila();i++){
        for(int j=0;j<this->getColumna();j++){
            this->setN(i,j,rand() % 20);
            
        }
    }
}
float Matriz::Trans(){
	
}
