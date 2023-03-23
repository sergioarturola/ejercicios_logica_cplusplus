/*
Realice un programa que sin usar otras librerias y solamente bucles imprima al reves
una cadena de caracteres
*/
#include<iostream>
using namespace std;

int main(){
	
	char cadena[] = "Hola mundo";
	
	
	for(int i = sizeof(cadena) -1; i>=0; i--){
		cout<<cadena[i];
	}
	
	return 0;
	
}
