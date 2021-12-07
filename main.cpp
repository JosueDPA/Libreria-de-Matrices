#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include"Matriz.hpp"
#include"Compleja.hpp"

int main(){
	Compleja *ptrE1= new Compleja(3,3);
    ptrE1->LLenar();
	cout<<*ptrE1;
    cout<<endl;
    ptrE1->Trans();
	



    
    
    return 0;
}

