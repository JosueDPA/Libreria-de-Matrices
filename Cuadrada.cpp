#include"Cuadrada.hpp"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

Cuadrada::Cuadrada(int fila):Matriz(fila,fila){
}
float Cuadrada::Trans(){
    for(int i=0;i<this->getColumna();i++){
        for(int j=0;j<this->getFila();j++){
            cout<<this->getNumero(j,i)<<"  ";
        }
        cout<<endl;
    }
}