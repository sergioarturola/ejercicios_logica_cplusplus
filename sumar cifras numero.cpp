/*
  Realiza un programa en C++ donde se pida al usuario un numero por consola y se imprima la suma
  de sus cifras
*/

#include<iostream>
using namespace std;

int main(){
	
	int n, suma;
	
	suma = 0;
	
	cin>>n;
	
	while(n>0){
		//n modulo 10 regresa ultima cifra del numero
		
		suma = suma + n%10; //se va acumulando la ultima cifra del numero si se tiene 123 toma el 3 y lo acumula en suma
		
		n = n/10; //para que se vaya truncando el numero si se tiene 123/10 -> 12.3 asi ya solo se tiene el 12
	}
	
	cout<<"La suma es: "<<suma;
	
	return 0;
}
