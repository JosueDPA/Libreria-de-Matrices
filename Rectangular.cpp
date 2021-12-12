#include"Rectangular.hpp"
#include<iostream>
using std::cin;
using std::cout;
using std::endl;


Rectangular::Rectangular(int fila,int columna):Matriz(fila,columna){

}
float Rectangular::Trans(){
    Matriz::Trans();
    for(int i=0;i<this->getColumna();i++){
        for(int j=0;j<this->getFila();j++){
            cout<<this->getNumero(j,i)<<"  ";
        }
        cout<<endl;
    }


}

