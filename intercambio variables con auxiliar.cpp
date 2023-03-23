#include<iostream>
using namespace std;
/*
  Realizar un programa C/C++ que intercambie 2 variables mediante una funcion y mostrar
  los datos por consola
*/

void intercambio(int a, int b);

int main(){
	
	int numUno, numDos;
	cout<<"Digita el valor A: "; cin>>numUno;
	cout<<"Digita el valor B: "; cin>>numDos;
	
	intercambio(numUno, numDos);
	
	return 0;
	
}

void intercambio(int a, int b){
	
	int aux = 0;
	aux = a;
	a = b;
	b = aux;
	
	cout<<"Intercambio de variables"<<endl;
	cout<<"A: "<<a<<endl;
	cout<<"B: "<<b<<endl;
	
}