/*
 Escribir un programa en C/C++ que pida al usuario cuantas veces desea realizar la suma, resta y multiplicacion de los
 numeros que se vayan introduciendo por teclado, al final mostrar el total de las operaciones
*/
#include<stdio.h>

int main(){
	
	int num_oper, numero;
	int suma = 0, resta = 0, multi = 1; //en uno para evitar que siempre sea cero la multiplicacion
	
	printf("Digita el numero de operaciones a realizar: ");
	scanf("%d", &num_oper);
	
	for(int i = 0; i<num_oper; i++){

		printf("Ingresa numero: ");
		scanf("%d", &numero);
		
		suma =+ numero;
		resta =-numero;
		multi = multi*numero;
	}
	
	printf("\nSuma total: %d", suma);
	printf("\nResta total: %d", resta);
	printf("\nMultiplicacion total: %d", multi);
	
	return 0;
}

