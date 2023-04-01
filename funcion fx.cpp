/*
  Dada la siguiente funcion f(x) donde x es ingresado por el usuario
  f(x) = 3x^2/5 +6x/7 -3
  imprima el resultado de la funcion
*/

#include<iostream>
using namespace std;

int main(){

	double x, resultado;
	
	cout<<"Ingresa valor x: "; cin>>x;
	
	cout<<"f("<<x<<") = 3("<<x<<")^2 + 6("<<x<<")"<<endl;
	cout<<"       ---      ---    - 3"<<endl;
	cout<<"        5        7                      "<<endl;
	
	resultado = ((3*(x*x))/5) + ((6*x)/7) - 3;
	
	cout<<"f("<<x<<")= "<<resultado<<endl;  
}
