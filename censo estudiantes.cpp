/*
  Escribir un algoritmo que pida el numero de estudiantes a censar y despues registre su edad,
  al final mostrar cuantos estudiantes son mayores y menores de edad
*/

#include<iostream>
using namespace std;

int main(){
	
	int edad, numero, mayores = 0, menores = 0;
	cout<<"Digita el numero de estuidantes a censar: "; cin>>numero;
	
	for(int i = 0; i<numero; i++){
		
		cout<<"Edad estudiante["<<i<<"]: "; cin>>edad;
		
		if(edad<18) menores++;
		if(edad >=18) mayores ++;
	}
	
	cout<<"Estudiantes mayores de edad: "<<mayores<<endl;
	cout<<"Estudiantes menores de edad: "<<menores<<endl;
	
	return 0;
}
