#include<iostream>
using namespace std;
/*
   En un programa C/C++ realizar el intercambio de dos varibales mediante una funcion
*/

void sinAux(int a, int b);

int main(){
	
	int numUno, numDos;
	cout<<"Digita el valor A: "; cin>>numUno;
	cout<<"Digita el valor B: "; cin>>numDos;
	
	sinAux(numUno, numDos);
	
	return 0;
}


void sinAux(int a, int b){
    /*
	primero multiplicamos a*b y el resultado lo guardamos en b (con la multiplicacion aseguramos que sean multiplos)
	b = b*a //84
	ahora b vale 84
	
	para que a sea igual a siete 7 entonces divido lo que hay en B (84)/ lo que hay en A (12) = 7
	a = b/a // = 7
	ahora a es igual a lo que habia en B(7)
	para que B tome el valor de a (12) entonces divido lo que hay en B (84) entre lo que ahora hay en A (7) = 12
	
	b = b/a // =12
	*/
	b = a*b;
	a = b/a;
	b = b/a;
	
	cout<<"Intercambio"<<endl;
	cout<<"A: "<<a<<endl;
	cout<<"B: "<<b<<endl;

	
}

