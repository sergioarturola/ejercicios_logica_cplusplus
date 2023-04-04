/*
 Escribe un programa en c/c++ que mediante una funcion valide si el numero es mayor a cero o no
*/

#include<iostream>
using namespace std;

bool validarNum(int x);

int main(){
	
	
	int numero;
	bool validar = true;
	
	do{
	cout<<"Escribe un numero mayor que cero: "; cin>>numero;
	validar = validarNum(numero);

	}while(validar);
	
	cout<<"Muy bien";	
}

bool validarNum(int x){
	
	if(x>0){
		return false;
	}
	else{
		return true;
	}
}
