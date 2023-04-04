#include<iostream>

int main(){
	
	int a, b, c;
	
	printf("Ingresa numero a: ");
	scanf("%i", &a);
	printf("Ingresa numero b: ");
	scanf("%i", &b);
	printf("Ingresa numero c: ");
	scanf("%i", &c);
	
	if(a > b && a>c){
		printf("El numero %i es el mayor", a);
	}
	else if(b>c){
		printf("El numero %i es el mayor", b);
	}
	else{
		printf("El numero %i es el mayor", c);
	}
	

  return 0;
 }

