/*
 Realizar el alagoritmo en c/c++ donde el usuario ingrese 3 valores y 
 los intercambie 
*/

#include<iostream>
using namespace std;

int main(){
	int a, b, c, aux_a, aux_b;

	cout<<"Ingresa valor a: "; cin>>a;
	cout<<"Ingresa valor b: "; cin>>b;
	cout<<"Ingresa valor c: "; cin>>c;
	cout<<"----- Antes del cambio ------"<<endl;
	cout<<"Valor a: "<<a<<endl;
	cout<<"Valor b: "<<b<<endl;
	cout<<"Valor c: "<<c<<endl;
	
	aux_a = a;
	aux_b = b;
	a = c;
	b = aux_a;
	c = aux_b;
	
	cout<<"----- Despues del cambio ------"<<endl;
	
	cout<<"Valor a: "<<a<<endl;
	cout<<"Valor b: "<<b<<endl;
	cout<<"Valor c: "<<c<<endl;
	
	return 0;
	
}
