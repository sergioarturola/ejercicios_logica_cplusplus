/*
Ingrese por teclado dos numeros n1 y n2, sume las cifras de cada numero
e indice cual de los dos numeros es mayor por su suma, utilice funciones
para separar la logica
*/
#include<iostream>
using namespace std;

int contador(int num);
int sumar_numeros(int num, int contador);


int main(){
	
	int num1, num2, contador1, contador2, digito, suma1, suma2;
	int lista1[contador1], lista2[contador2];
	//pido los datos
	cout<<"Digita num1: "; cin>>num1;
	cout<<"Digita num2: " ; cin>>num2;
	//veo de cuantos digitos es el numero
	
	contador1 = contador(num1);
	contador2 = contador(num2);
	//pasamos los numeros a un array y retornamos el valor de la suma
    
	suma1 = sumar_numeros(num1, contador1);
    suma2 = sumar_numeros(num2, contador2);
	
	//comparamos los valores 
	
	if(suma1 > suma2){
		cout<<"El mayor es NUM1 con suma: "<<suma1;
	}
	else if(suma1<suma2){
		cout<<"El mayor es NUM2 con suma: "<<suma2;
	}
	else{
		cout<<"Las sumas son iguales: "<<suma1<<"= "<<suma2;
	}
	
	return 0;
}


int contador(int num){
	int num_digitos = 0;
	
	while(num>0){
		num = num/10;
		num_digitos++;
	}
	
	return num_digitos;
}


int sumar_numeros(int num, int contador){
	int lista[contador], i = 0, suma = 0, digito = 0;
	
	//pasamos el numero a un array
	while(num>0){
		digito = num%10;
		lista[i] = digito;
		num = num/10;
		digito = 0;
		i++;	
	}
	//realizamos la suma del array
	for(int i = 0; i<contador; i++){
		suma = suma + lista[i];
	}
	
	return suma;
}
