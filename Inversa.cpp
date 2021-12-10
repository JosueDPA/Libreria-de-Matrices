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

float Inversa::Metodo(){
    for(int i=0;i<this->getFila();i++)
	{
	  float pivote=this->getNumero(i,i);
	  float aux;
	  for(int k=0;k<this->getColumna()-1;k++)
	  {
          this->setN(i,k,this->getNumero(i,k)/pivote);
          this->setI(i,k,this->getI(i,k)/pivote);
	  }
	  
	  for(int j=0;j<this->getFila();j++)
	  {
	  	if(i!=j)
		  {
	  		aux=this->getNumero(j,i);     
	  		for(int g=0;g<this->getFila();g++)
			  {
                this->setN(j,g,this->getNumero(j,g)-aux*this->getNumero(i,g));
                this->setI(j,g,this->getI(j,g)-aux*this->getI(i,g));
			  }
			  
		  }
	  }
	    
	}
    for(int i=0;i<this->getFila();i++){
        for(int j=0;j<this->getColumna();j++){
            cout<<this->getI(i,j)<<"  ";
        }
        cout<<endl;
    }
}





const float Inversa::getI(int i, int j)const{
    return *(*(I+i)+j);
}
float Inversa::setI(int i,int j,float m){
    *(*(I+i)+j)=m;
}
float Inversa::setI(int i,int j){
    cin>>*(*(I+i)+j);
}
float Inversa::LLenar(){
    Matriz::LLenar();
}