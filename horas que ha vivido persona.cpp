/*
  Realizar en C++ un programa que pida el nombre como un String y la edad de una persona
  con ayuda de una funcion mandar un mensaje con el nombre y las horas que ha vivido de
  acuerdo a su edad por consola.
*/

#include<iostream>
#include<string>
using namespace std;

void anios_horas(string, int);

int main(){
	string nombre;
	int edad;
	
	cout<<"Dime tu nombre: "; getline(cin, nombre, '\n');
	cout<<"Dime tu edad: "; cin>>edad;
	
	anios_horas(nombre, edad);
	
	return 0;
}

void anios_horas(string name, int age){
	int vivido;
	vivido = age*8760;
	cout<<name<<" ha vivido "<<vivido<<" horas";
}
