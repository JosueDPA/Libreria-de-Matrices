#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include"Matriz.hpp"
#include"Compleja.hpp"
#include"Inversa.hpp"

int main(){
	Inversa *ptrE1= new Inversa(3,3);
    ptrE1->LLenar();
	cout<<*ptrE1;
    cout<<endl;
    ptrE1->Metodo();
   
	



    
    
    return 0;
}

