/*
Pedir 3 datos por teclado y con una escalera if-else if-else determiar si un numero es la suma de los otros 2 numeros
*/

#include<iostream>
using namespace std;


int main(){
	
	int n1, n2, n3;
	
	cout<<"Ingresa N1: "; cin>>n1;
	cout<<"Ingresa N2: "; cin>>n2;
	cout<<"Ingresa N3: "; cin>>n3;
	
	if(n1 == n2+n3){
		cout<<n1<<" es la suma de "<<n2<<"+"<<n3<<endl;
	}
	else if(n2 == n1 + n3){
		cout<<n2<<" es la suma de "<<n1<<"+"<<n3<<endl;
	}
	else if(n3 == n1+n2){
		cout<<n3<<" es la suma de "<<n1<<"+"<<n2<<endl;
	}
	else{
		cout<<"Ninguno es la suma de los otros 2"<<endl;
	}
	
	return 0;
}


