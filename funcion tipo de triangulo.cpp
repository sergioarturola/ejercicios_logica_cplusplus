/*
  Programa una funcion que tenga como parametros 3 numeros enteros (que representan los lados de un triangulo)
  y dependiendo de los lados imprima por consola si es un triangulo Escaleno, Equilatero o Isoceles
*/

#include<iostream>
using namespace std;

string triangulo(int, int, int);


int main(){
	
	
    cout<<triangulo(15,2,32)<<endl; //escaleno
    cout<<triangulo(20,20,20)<<endl; // equilatero
    cout<<triangulo(33,10,33)<<endl; // isoceles
    cout<<triangulo(10,10,5)<<endl;//isoceles
    cout<<triangulo(19,5,5)<<endl;//isoceles
	
	return 0;
}


string triangulo(int a, int b, int c){
	
	if(a == b && b == c && a == c){
		return "Equilatero";
	}
	
	else if (a == b || b == c || a == c){
		return "Isoceles";
	}
	
	else{
		return"Escaleno";
	}
}
