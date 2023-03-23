/*
  Se necesita un programa que pida al usuario un numero y mediante una funcion verificar que sea
  exactamente de 4 cifras, despues indicar cual de las cifras es el mayor y menor
*/

#include<iostream>
using namespace std;

//funcion para verificar
bool totalCifras(int num){
	int contador = 0;
	bool cifras = false;
	
		while(num > 0)
	{
		num = num/10;
		contador = contador +1;
	}
	
	if(contador == 4) return true;

}

int main(){
	
	int numero, i,numero_copia, min, max;
	int separando[4];
	
	cout<<"Ingresa un numero: "; cin>>numero;
	//si es de 4 entra a este bloque
	if(totalCifras(numero)){
		
		while(numero>0){
	
		//truncando el numero y llenandolo en el array de derecha a izquierda
		separando[i] = numero%10;
		numero = numero/10;
		i++;
		}
		
		min = separando[0];
	    max = separando[0];
	
	for(int i = 0; i<4; i++){
		
		if(separando[i]>max){
			max = separando[i];
		}
		if(separando[i]<min){
			min = separando[i];
		}
	}
	
	cout<<"\nEl numero mayor es: "<<max;
	cout<<"\nEl numero menor es: "<<min;
	
	//si no es asi no se realiza ninguna operacion
	}
	else{
		cout<<"Tu numero no tiene 4 cifras";

	}
	
	return 0;
}
