/*
 Crea 2 funciones llamadas func1 y func2 donde en una se le pase un nombre y salude
 y en otra se pasen 3 numeros y muestre por pantalla el resultado de la suma
*/

#include<iostream>
using namespace std;

void func1(string nombre){
	
	cout<<"Saludos a "<<nombre<<endl;
}

void func2(int a, int b, int c){
	
	int resultado = a+b+c;
	
	cout<<"La suma es: "<<resultado<<endl;
}


int main(){
	
	func1("Arturo Lopez");
	func2(1,2,3);
}