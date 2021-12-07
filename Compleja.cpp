#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<string>
#include<stdlib.h>
#include<iomanip>
#include<ctime>
#include"Compleja.hpp" 


Compleja::Compleja(int fila,int columna):Matriz(fila,columna){
     img= new float*[fila];
     for(int i=0;i<columna;i++){
         img[i]= new float[columna];
     }
     for(int i=0;i<fila;i++){
         for(int j=0;j<columna;j++){
             img[i][j]=0;
         }
     }
}
Compleja::Compleja(Compleja &C1,Matriz &C2):Matriz(C2){
    int a=C1.getFila();
    int b=C1.getColumna();
    img= new float*[a];
    for(int i=0;i<a;i++){
        img[i]= new float[b];
    }
    for(int j=0;j<a;j++){
        for(int k=0;k<b;k++){
            *(*(img+j)+k)=C1.getImg(j,k);
        }
    }

}
istream &operator>>(istream &entrada,Compleja &C1){
       for(int i=0;i<C1.getFila();i++){
           for(int j=0;j<C1.getColumna();j++){
               cout<<"ingrese la parte real"<<endl;
               C1.setNumero(i,j);
               cout<<"ingrese la parte imaginaria"<<endl;
               C1.setIM(i,j);
           }
       }
}
ostream &operator<<(ostream &salida,Compleja &C1){
    for(int i=0;i<C1.getFila();i++){
        for(int j=0;j<C1.getColumna();j++){
            cout<<C1.getNumero(i,j);
            if(C1.getImg(i,j)>=0){
             cout<<"+"<<C1.getImg(i,j)<<"i"<<"  ";
            }
            else{
                cout<<C1.getImg(i,j)<<"i"<<"  ";
            }
            
        }
        cout<<endl;
    }
    
}
Compleja &operator+(Compleja &C1,Compleja &C2){
    int A=C1.getFila();
    int B=C1.getColumna();
    Matriz C3(A,B);
    Compleja C4(A,B);
if(C1.getFila()==C2.getFila() && C1.getColumna()==C2.getColumna()){
    for(int i=0;i<A;i++){
        for(int j=0;j<B;j++){
            C3.setN(i,j,C1.getNumero(i,j)+C2.getNumero(i,j));
            C4.img[i][j]=C1.getImg(i,j)+C2.getImg(i,j);
        }
    }
    return *(new Compleja(C4,C3));
 }   
 else
 {
     cout<<"el tamaño de las matrices que usted desea sumar son diferentes"<<endl;
 }
}
Compleja &operator-(Compleja &C1,Compleja &C2){
    int A=C1.getFila();
    int B=C1.getColumna();
    Matriz C3(A,B);
    Compleja C4(A,B);
if(C1.getFila()==C2.getFila() && C1.getColumna()==C2.getColumna()){
    for(int i=0;i<A;i++){
        for(int j=0;j<B;j++){
            C3.setN(i,j,C1.getNumero(i,j)-C2.getNumero(i,j));
            C4.img[i][j]=C1.getImg(i,j)-C2.getImg(i,j);
        }
    }
    return *(new Compleja(C4,C3));
}   
 else
 {
     cout<<"el tamaño de las matrices que usted desea restar son diferentes"<<endl;
 }    
}
Compleja &operator*(Compleja &C1,Compleja &C2){
    int a=C1.getFila();
    int b=C2.getColumna();
    Matriz C3(a,b);
    Compleja C4(a,b);
    float c,d;
    if(C1.getColumna()==C2.getFila()){
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                c=0;
                d=0;
                for(int k=0;k<a;k++){
                     C3.setN(i,j,C1.getNumero(i,k)*C2.getNumero(k,j)+(-1)*C1.getImg(i,k)*C2.getImg(k,j)+c);
                     C4.img[i][j]=C1.getNumero(i,k)*C2.getImg(k,j)+C1.getImg(i,k)*C2.getNumero(k,j)+d;
                     c=C3.getNumero(i,j);
                     d=C4.getImg(i,j);
                }
            }
        }
        return *(new Compleja(C4,C3));
    }
    else
    {
        cout<<"no se pueden multiplicar por el tamaño de las matrices "<<endl;
    }

}
Compleja &operator*(Compleja &C1,float Escalar){
    int a=C1.getFila();
    int b=C1.getColumna();
    Matriz C2(a,b);
    Compleja C3(a,b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            C2.setN(i,j,C1.getNumero(i,j)*Escalar);
           C3.SetIMG(i,j,C1.getImg(i,j)*Escalar);
        }
    }
}

//funciones set
float Compleja::setIM(int i,int j){
    cin>>*(*(img+i)+j);
}

const float Compleja::getImg(int i,int j)const{
    return *(*(img+i)+j);
}
float Compleja::SetIMG(int i,int j,float numero){
       *(*(img+i)+j)=numero;
}
float Compleja::LLenar(){
    Matriz::LLenar();
    srand(time(NULL));
    for(int i=0;i<this->getFila();i++){
        for(int j=0;j<this->getColumna();j++){
            this->SetIMG(i,j,rand() % 20);
        }
    }
}
float Compleja::Trans(){
    for(int i=0;i<this->getColumna();i++){
        for(int j=0;j<this->getFila();j++){
            cout<<this->getNumero(j,i);
            if(this->getImg(j,i)>=0){
             cout<<"+"<<this->getImg(j,i)<<"i"<<"  ";
            }
            else{
                cout<<this->getImg(j,i)<<"i"<<"  ";
            }
        }
        cout<<endl;
    }
}
