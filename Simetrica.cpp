#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<iomanip>
#include<stdlib.h>
#include<ctime>
#include"Simetrica.hpp"

Simetrica::Simetrica(int fila):Matriz(fila,fila){
srand(time(NULL));

}

float Simetrica::LLenar(){
    Matriz::LLenar();
    
    int b=this->getB();
    srand(time(NULL)+b);
    for(int i=0;i<this->getFila();i++){
    	
        for(int j=0;j<this->getColumna();j++){
            this->setN(i,j,20+rand() %100 );
            this->setN(j,i,this->getNumero(i,j));
            
        }
      
    }
   contar();

    
}
