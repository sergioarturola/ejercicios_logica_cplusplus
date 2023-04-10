#include<iostream>
using namespace std;

int main(){
	
	
	int numero, suma = 0;
	
	cout<<"Ingresa un numero: "; cin>> numero;
	
	for(int i = 1; i<numero; i++){
		if(numero%i == 0){
			suma +=i;
		}
	}
	
	//verificando si es perfecto
	if(numero == suma){
		cout<<"El numero "<<numero<<" es perfecto";
	}
	else{
		cout<<"No es un numero perfecto";
	}
	
}