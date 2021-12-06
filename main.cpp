#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include"Matriz.hpp"
#include"Compleja.hpp"

int main(){
	Compleja *ptre1= new Compleja(3,3);
	Compleja *ptre2= new Compleja(3,3);
	Compleja *ptre3= new Compleja(3,3);
    cin>>*ptre1;
    cout<<"ingrese los valores de la segunda matriz"<<endl;
    cin>>*ptre2;
    cout<<*ptre2;
    cout<<*ptre1;
    *ptre3=*ptre1**ptre2;


    cout<<endl;
    cout<<*ptre3;
    
    
    return 0;
}

