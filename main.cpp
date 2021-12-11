#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<stdlib.h>
#include"Matriz.hpp"
#include"Compleja.hpp"
#include"Inversa.hpp"
#include"Simetrica.hpp"
#include"Traingular.hpp"

int main(){
	Traingular *ptre1= new Traingular(3,0);
	Traingular *ptre2= new Traingular(3,1);


    ptre1->LLenar();
	ptre2->LLenar();
	cout<<*ptre1;
	cout<<endl;
	cout<<*ptre2; 

    
    
    return 0;
}

