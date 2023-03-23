/*
  Crea una funcion en C/C++ que calcule el area de un rectangulo,
  pida los datos por la entrada estandar
*/

#include<iostream>
using namespace std;

int rectangulo(int bas, int alt){
	
	return bas*alt;
}



int main(){
	
	int base, altura;
	cout<<"Digita la base: "; cin>>base;
	cout<<"Digita la altura: "; cin>>altura;
	
	cout<<"El area del rectangulo es: "<<rectangulo(base,altura);
	
	
}
