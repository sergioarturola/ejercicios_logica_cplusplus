#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	
	srand((unsigned)time(NULL));//semilla para numero aleltorio
	
	int a, b, aciertos = 0, respuesta;
	
	for(int i = 0; i<5; i++){
		a =  1 + rand()%100; //numero aleatorio 1-100
		b =  1 + rand()%100; //numero aleatorio 1-100
		printf("%d + %d = ", a,b);
		scanf("%d", &respuesta);
		
		if(respuesta == a+b) aciertos++;
	}
	
	printf("\nTotal de aciertos: %d", aciertos);
}
