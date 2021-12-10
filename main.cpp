#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<stdlib.h>
#include"Matriz.hpp"
#include"Compleja.hpp"
#include"Inversa.hpp"
#include"Simetrica.hpp"

int main(){
	Simetrica *ptre1=new Simetrica(3);
	Simetrica *ptre2=new Simetrica(3);


    ptre1->LLenar();
	ptre2->LLenar();
	cout<<*ptre1;
	cout<<endl;
	cout<<*ptre2; 

    
    
    return 0;
}

