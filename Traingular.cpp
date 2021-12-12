#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include"Traingular.hpp"


Traingular::Traingular(int fila,int N):Matriz(fila,fila){
    this->N=N;
}
float Traingular::LLenar(){
    Matriz::LLenar();
    int b=this->getB();
    int c=1;
    for(int i=0;i<this->getFila();i++){
        for(int j=0;j<this->getFila();j++){
            this->setN(i,j,0);
        }
    }
   if(this->N==0){
    
    srand(time(NULL)+b);
    for(int i=0;i<this->getFila();i++){
        for(int j=0;j<c;j++){
            this->setN(i,j,rand()%30);
        }
        c=c+1;
    }
} 
if(this->N==1){
    c=0;
    srand(time(NULL)+b);
    for(int i=0;i<this->getFila();i++){
        for(int j=0;j<this->getFila()-c;j++){
            this->setN(i,j+c,rand()%30);
        }
        c=c+1;
    }
} 
contar();
}
float Traingular::Trans(){
    Matriz::Trans();
    for(int i=0;i<this->getColumna();i++){
        for(int j=0;j<this->getFila();j++){
            cout<<this->getNumero(j,i)<<"  ";
        }
        cout<<endl;
    }
}
