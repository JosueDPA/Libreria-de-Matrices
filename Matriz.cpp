#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
#include<string>
#include<stdlib.h>
#include<iomanip>
#include<ctime>
#include"Matriz.hpp"

int Matriz::b =0;
Matriz::Matriz(int fila,int columna){
    this->fila=fila;
    this->columna=columna;
    matriz= new float*[fila];
    for(int i=0;i<this->columna;i++){
        matriz[i]= new float[columna];
    }
    
}
Matriz::Matriz(int columna){
    this->fila=columna;
    this->columna=1;
    matriz= new float*[fila];
    for(int i=0;i<this->fila;i++){
        matriz[i]= new float[1];
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
istream &operator>>(istream &entrada,Matriz &C1){
    for(int i=0;i<C1.getFila();i++){
        for(int j=0;j<C1.getColumna();j++){
            C1.setN(i,j);
        }
    }
}
ostream &operator<<(ostream &salida,Matriz &C1){
	for(int i=0;i<C1.getFila();i++){
        for(int j=0;j<C1.getColumna();j++){
            cout<<C1.getNumero(i,j)<<"  ";
        }
        cout<<endl;
    }
} 

Matriz &operator *(Matriz &M1,Matriz &M2){
		int a=M1.fila;
		int b=M2.columna;
		Matriz Resultado(a,b);
		if(M1.columna==M2.fila){
			float c;
	        for(int i=0;i<M1.fila;i++){
		
	 	         for(int j=0;j<M2.columna;j++){
			           c=0;
		              for(int z=0;z<M2.fila;z++){
		   	
				        Resultado.matriz[i][j]=M1.getNumero(i,z)*M2.getNumero(z,j)+c;
				        c=Resultado.matriz[i][j];
				        
			          }
			         
		         }
		         
		         
	        }
	        
	     return *(new Matriz(Resultado));
		}
		else{
			cout<<"no pueden ser multiplicadas por la dmensiones de las matrices"<<endl;
		}

}
//operador para sumar matrices
Matriz &operator +(Matriz &M1,Matriz &M2){
	int a=M1.getFila();
	int b=M1.getColumna();
	Matriz Result(a,b);
	if(M1.getFila()==M2.getFila() && M1.getColumna()==M2.getColumna()){
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				Result.matriz[i][j]=M1.getNumero(i,j)+M2.getNumero(i,j);
			}
		}
	 return *(new Matriz(Result));;
	}else{
		cout<<"las dimensiones de las matrices que desea sumar son difrerentes"<<endl;
	}
	
}
//operador para restar matrices 
Matriz &operator -(Matriz &M1,Matriz &M2){
	int a=M1.getFila();
	int b=M1.getColumna();
	Matriz Result(a,b);
	if(M1.getFila()==M2.getFila() && M1.getColumna()==M2.getColumna()){
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				Result.matriz[i][j]=M1.getNumero(i,j)-M2.getNumero(i,j);
			}
		}
		return *(new Matriz(Result));
	}else{
		cout<<"las dimensiones de las matrices que desea sumar son difrerentes"<<endl;
	}
	
}
//operador para multplicar una matriz por un  escalar
Matriz &operator *(Matriz &M1,float &Escalar){
	int a=M1.getFila();
	int b=M1.getColumna();
	Matriz Result(a,b);
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			Result.matriz[i][j]=M1.getNumero(i,j)*Escalar;
		}
	}
	return *(new Matriz(Result));
}
// funciones miembro
//operador []


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
	int B=this->getB();
    srand(time(NULL)+B);
    for(int i=0;i<this->getFila();i++){
        for(int j=0;j<this->getColumna();j++){
            this->setN(i,j,rand() % 100);
            
        }
    }
	contar();
}
float Matriz::Trans(){
	
}
int Matriz::setB(int b){
	this->b=b;
}
 int Matriz::getB(){
	return this->b;
}
int Matriz::contar(){
	b=b+2;
}
Matriz::~Matriz(){
	delete[] this->matriz;

}

