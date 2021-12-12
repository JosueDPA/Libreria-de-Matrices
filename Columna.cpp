#include<iostream>
using std::endl;
using std::cout;
#include"Columna.hpp"
#include<stdlib.h>
#include<ctime>
#include<iomanip>


Columna::Columna(int columna):Matriz(columna){

}
float Columna::LLenar(){
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
float Columna::Trans(){
   
    Matriz::Trans();
    for(int i=0;i<this->getColumna();i++){
        for(int j=0;j<this->getFila();j++){
            cout<<this->getNumero(j,i)<<"  ";
        }
        cout<<endl;
    }
}