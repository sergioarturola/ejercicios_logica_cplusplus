/*
Usando una escalera if-else if-else pedir por teclado mes de nacimiento (como cadena) y
el dia, posteriormente imprimir por pantalla el signo zodical, por ejemplo si
mes = marzo y dia 21 imprimir "Eres Aries"
*/

#include<iostream>
#include<string.h>
using namespace std;


int main(){
	
	char x[100];
	int y;
	
	cout<<"Escribe mes de nacimiento: "; gets(x);
	cout<<"Escribe dia: "; cin>>y;
	
	if(strcmp(x, "marzo") == 0 && y>= 21 || (strcmp(x, "abril") == 0 && y<=20 )){
		cout<<"Eres Aries";
	}
	else if(strcmp(x, "abril") == 0 && y>= 21 || (strcmp(x, "mayo") == 0 && y<=20 )){
		cout<<"Eres tauro";
	}
	else if(strcmp(x, "mayo") == 0 && y>= 21 || (strcmp(x, "junio") == 0 && y<=20 )){
		cout<<"Eres geminis";
	}
	else if(strcmp(x, "junio") == 0 && y>= 21 || (strcmp(x, "julio") == 0 && y<=22 )){
		cout<<"Eres cancer";
	}
	else if(strcmp(x, "julio") == 0 && y>= 23 || (strcmp(x, "agosto") == 0 && y<=22 )){
		cout<"Eres leo";
	}
	else if(strcmp(x, "agosto") == 0 && y>= 23 || (strcmp(x, "septiembre") == 0 && y<=22 )){
		cout<<"Eres virgo";
	}
	else if(strcmp(x, "spetiembre") == 0 && y>= 23 || (strcmp(x, "octubre") == 0 && y<=22 )){
		cout<<"Eres Libra";
	}
	else if(strcmp(x, "octubre") == 0 && y>= 23 || (strcmp(x, "noviembre") == 0 && y<=21 )){
		cout<<"Eres escorpio";
	}
	else if(strcmp(x, "noviembre") == 0 && y>= 22 || (strcmp(x, "diciembre") == 0 && y<=21 )){
		cout<<"Eres sagitario";
	}
	else if(strcmp(x, "diciembre") == 0 && y>= 22 || (strcmp(x, "enero") == 0 && y<=19 )){
		cout<<"Eres capricornio";
	}
	else if(strcmp(x, "enero") == 0 && y>= 20 || (strcmp(x, "febrero") == 0 && y<=18 )){
		cout<<"Eres acuario";
	}
	else if(strcmp(x, "febrero") == 0 && y>= 19 || (strcmp(x, "marzo") == 0 && y<=20 )){
		cout<<"Eres piscis";
	}
	else{
		cout<<"Signo no existe";
	}
	return 0;
}


