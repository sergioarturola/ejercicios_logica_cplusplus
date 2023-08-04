/*
Realizar un programa que cuente con 2 funciones una para saber cuantas cifras tiene un numero entero
y la otra funcion valide si es o no entero, si es entero entonces imprimir cuantas cifras tiene y
volver a pedir otro numero en caso contrario mandar un mensaje de que no pueden contar las cifras,
el programa finaliza cuando se pone cero 
*/

#include<iostream>
using namespace std;

//declaracion de las funciones
int contCifras(int x);
void pedirNumeros();

//cuerpo principal
int main(){
	
	pedirNumeros();
	return 0;
}

//cuerpo de las funciones
void pedirNumeros(){
		int n;
		float f;
		
		while(f != 0){
			cout<<"Ingresa un numero: ";
			cin>>f;
			n = f;
		
			if(f - n){
				cout<<"NO puedo contar cifras decimales"<<endl;
			}
			else{
				int cifras = contCifras(n);
				cout<<n<<" tiene de cifras "<<cifras<<endl;
			}
			
		}	
}


int contCifras(int x){
	
	int contador = 0;
	
	while(x > 0){
		x = x/10;
		contador++;	
	}
	
	return contador;
}
