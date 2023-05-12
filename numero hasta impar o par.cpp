/*
Realizar un programa en C/C++ donde se solicite un numero al usuario y preguntarle
si quiere imprimir los numeros pares o impares hasta ese numero 
*/

#include<iostream>
using namespace std;

int main(){
	int numero;
	char eleccion;
	
	cout<<"Ingresa un numero: "; cin>>numero;
	cout<<"Imprimir Pares -> p Impares -> i: "; cin>>eleccion;
	
	if(eleccion == 'p'){
		for(int i = 0; i<numero; i+= 2){
			cout<<i<<" ";
		}
	}
	
	else if(eleccion == 'i'){
		for(int i = 1; i<numero; i+= 2){
			cout<<i<<" ";
		}
	}
	else{
		cout<<"No se pudo procesar"<<endl;
	}
}
