/*
 Escribe un programa que pida un numero al usuario y por consola muestre todos sus divisores
*/

#include<iostream>
using namespace std;

int main(){
	
	int numero;
	
	cout<<"Ingresa un numero: "; cin>>numero;
	
	for(int i = numero; i>0; i--){
		
		if(numero % i == 0){
			cout<<i<<" ";
			
		}
		
	}
	
	return 0;
}
