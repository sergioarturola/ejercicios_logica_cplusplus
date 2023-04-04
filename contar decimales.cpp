/*
Realizar un programa en c/c++ que dado un numero con parte entera y decimal, separe
ambas partes y las muestre en consola
*/

#include<iostream>
#include<iomanip>
using namespace std;
/*
1 decimal, multiplicas por 10.
2 decimales, multiplicas por 100.
3 decimales, multiplicas por 1000
*/

int main(){
	
	float numero;
	float decimal;
	
	cout<<"Ingresa un numero: "; cin>>numero;
	
	//con la siguiente formula podemos restar la parte entera del numero
	decimal = numero - int(numero);
	
	cout<<"La parte entera del numero es: "<<int(numero);
	cout<<"La parte decimal del numero es: "<<decimal;
	
	return 0;
	
}
