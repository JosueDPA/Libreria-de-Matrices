#include"Fila.hpp"
#include<iostream>
using std::cout;
using std::endl;
#include<stdlib.h>
#include<ctime>
#include<iomanip>


Fila::Fila(int fila):Matriz(1,fila){

}
float Fila::LLenar(){
Matriz::LLenar();
    
     int b=this->getB();
    srand(time(NULL)+b);
    for(int i=0;i<this->getFila();i++){
    	
        for(int j=0;j<this->getColumna();j++){
            this->setN(i,j,20+rand() %100 );
           
            
        }
      
    }
   contar();

}

float Fila::Trans(){
    Matriz::Trans();
    for(int i=0;i<this->getColumna();i++){
        for(int j=0;j<this->getFila();j++){
            cout<<this->getNumero(j,i)<<"  ";
        }
        cout<<endl;
    }
}
