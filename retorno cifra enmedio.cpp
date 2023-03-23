/*
  Escribe un programa que pida al usuario un numero de 3 cifras y por consola
  retorne el valor de enmedio, use una funcion para realizar la logica
*/

#include<iostream>
using namespace std;

int enmedio(int a){
	int medio;
	medio = (a/10)%10; //primero quito el ultimo numero /10 y de los 2 q quedan extraigo el segundo %10
	return medio;
	
}


int main(){
	
  int numero, contador = 0;
  
  cout<<"Escribe un numero: "; cin>>numero;
  
   cout<<"Valor del medio: "<<enmedio(numero);

  return 0;

}

