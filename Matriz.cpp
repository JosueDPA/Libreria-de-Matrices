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
float Matriz::Trans(){
}
void Matriz::Help(){
	cout<<"Hola Ahora estas usando mi libreria"<<endl;
	cout<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
	cout<<"esta funcion es para ayudarte a entender como funciona"<<endl;
	cout<<endl;
	cout<<"Bueno empezemos!!"<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
    cout<<"esta libreria tiene varios tipos de matrices que usted puede utilizar"<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
	cout<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[ CUADRADA ]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
	cout<<"si quiere utilizar matrices de tipo cuadrada tendra que utilizar la libreria Cuadrada.hpp"<<endl;
	cout<<"cuando quiera crear un objeto de esta libreria tendra que declararlo Cuadrado nombredelobjeto(dimencion de la matriz)"<<endl;
	cout<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[ RECTANGULAR ]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
	cout<<"si quiere utilizar una matriz de tipo rectangular utilize la libreria Rectangular.hpp"<<endl;
	cout<<"cuando cree un objeto de este tipo  es Rectangular NombreDElObjeto(Dimencion de filas,dimencion de columnas)"<<endl;
	cout<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[ COLUMNA ]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
    cout<<"como dice el nombre es una matriz tipo columna de dmencion Mx1 se utiliza con la libreria Columna.hpp"<<endl;
	cout<<"para declarar este objeto es : Columna NombreDelObjeto(renglones de esta matriz)"<<endl;
    cout<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[ FILA ]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
    cout<<"Como dice el nombre es una matriz tipo fila de dimencion 1xM se utiliza la libreria Fila.hpp"<<endl;
	cout<<"para declarar este objeto es : Fila NombreDElObjeto(Dimencion de las columnas)"<<endl;
	cout<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[ SIMETRICA ]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
    cout<<"Esta es una matriz cuadrada y su transpuesta es igual a la original se utiliza Simetrica.hpp"<<endl;
	cout<<"para declara este objeto es : Simetrica NombreDelObjeto(Dimencion de la matriz)"<<endl;
	cout<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[ TRAINGULAR ]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
    cout<<"Esta e suna matriz cuadrada que se puede dividir en dos tipos Triangular inferior o Triangular Superior"<<endl;
	cout<<"1 0 0 esta es una matriz trangular inferior"<<endl;
	cout<<"2 1 0"<<endl;
	cout<<"4 5 1"<<endl;
	cout<<endl;
	cout<<"se usa la libreria Traingular.hpp y se declara el objeto Traingular NombreDelObejot(Dimencion de la matriz,1 si es superior o 0 si es inferior)"<<endl;
	cout<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[ INVERSA ]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
    cout<<"en esta caso este es un metodo para encontrar la inversa de una matriz se utiliza la libreria Inversa.hpp"<<endl;
	cout<<endl;
	cout<<"cuando declare el objeto es : Inversa NombreDelObjeto(dimencion de las filas,Dimnecion de las columnas)"<<endl;
	cout<<"para usar el metodo es Objeto.Metodo();"<<endl;
	cout<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[ COMPLEJA ]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
    cout<<"esta es una Matriz especifica  que tiene numeros complejos como elementos. una Matriz de MXN  "<<endl;
    cout<<"se utiliza la libreria Compleja.hpp"<<endl;
	cout<<"se declara los objetos asi : Compleja NombreDElObjeto(numero de filas,numero de columnas)"<<endl;
	cout<<endl;
	cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
    cout<<"cada objeto de la misma clase se puede hacer estas operaciones de manera simple="<<endl;
	cout<<"como por ejemplo Objeto1=Objeto2+Objeto3"<<endl;
	cout<<"Objeto1=Objeto2-Objeto3"<<endl;
	cout<<"Objeto1=Objeto2*Objeto3"<<endl;
	cout<<"Objeto1=Objeto*Escalar donde Escalar pertenece a los reales"<<endl;
	cout<<"la unica clase que no puede realizar estas operaciones anteriores es la Inversa ya que como dije es un metodo"<<endl;
	cout<<"pero todas pueden realizar estas operaciones "<<endl;
	cout<<"cin>>Objeto "<<endl;
	cout<<"cout<<Objeto"<<endl;
	cout<<"Objeto.llenar();estas funcion sirve para llenar las matrices de numeros aleatorios"<<endl;
	cout<<"Objeto.trans(); esta funcion sirve para sacar la transpuesta de las matrices "<<endl;
	cout<<"y este seria toda la explicacion para que entienda mi libreria ,Suerte!!"<<endl;


}
