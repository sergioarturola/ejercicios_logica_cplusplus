/*
Realizar un programa que usando una funcion imprima todos los numeros pirmos hasta 100

*/

#include<iostream>
using namespace std;

bool esPrimo(int numero){
	
	
	for (int i = 2; i<numero; i++){
		
		if (numero % i == 0){
			return false; //rompe el bucle for
		}
		
	}
	
	return true;
}

int main(){
	for(int i = 1; i<=100; i++){
		
		bool familia = esPrimo(i);
		
		if(familia){
			cout<<i<<endl;
		}
	}
}
