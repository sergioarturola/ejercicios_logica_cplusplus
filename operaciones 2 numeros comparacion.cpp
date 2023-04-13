/*
  Realizar un programa en C/C++ que pida 2 numeros por consola y muestre en pantalla lo siguiente:
  -Si el primero es divisible por el segundo
  -Si el segundo es divisible por el primero
  -Mostrar el mayor y menor
  -mostrar ambos numeros con mensaje si es par o impat
*/

#include<iostream>
using namespace std;

int main(){
	int a, b;
	
	cout<<"Ingresa numero a: "; cin>>a;
	cout<<"Ingresa numero b: "; cin>>b;
	
	// a/b
	if(a%b == 0){
		cout<<"El numero "<<a<<" es divisible entre "<<b<<endl;
	}
	else{
		
		cout<<"El numero "<<a<<" NO es divisible entre "<<b<<endl;
	}
	// b/a
	if(b%a == 0){
		cout<<"El numero "<<b<<" es divisible entre "<<a<<endl;
	}
	else{
		
		cout<<"El numero "<<b<<" NO es divisible entre "<<a<<endl;
	}
	
	//mayor y menor
	if(a> b){
		cout<<a<<" es mayor"<<endl;
		cout<<b<<" es el menor"<<endl;
	}
	else if(b>a){
		cout<<b<<" es mayor"<<endl;
		cout<<a<<" es el menor"<<endl;
	}
	else{
		cout<<"Son iguales"<<endl;
	}
	
	//par o impar
	if(a%2== 0){
		cout<<a<<" es par"<<endl;
	}
	else{
		cout<<a<<" es impar"<<endl;
	}
	
	if(b%2== 0){
		cout<<b<<" es par"<<endl;
	}
	else{
		cout<<b<<" es impar"<<endl;
	}
	
	
	
	
}