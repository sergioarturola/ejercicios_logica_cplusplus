/*
  Realizar un programa en C++ que dada una cadena de caracteres que tenga numeros y letras
  separe los numeros y los imprima en pantalla
*/

#include<iostream>
#include<cctype>
#include<string.h>
using namespace std;

int main(){
	
	char palabra [] = "jop981bmw34";
	int checar;
	
	cout<<"Los numeros en la cadena son :"<<endl;
	
	for(int i = 0; i<strlen(palabra); i++){
		checar = isdigit(palabra[i]);
		
		if(checar){
			cout<<palabra[i]<<" ";
		}
	}
	
	return 0;
}
