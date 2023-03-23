/*
  Escribe un programa que determine si una palabra es palindroma o no
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char a[50], b[50];
	
	cout<<"Escribe una palabra para comprobar si es palindroma"<<endl;
	cin.getline(a, 50, '\n');
	strcpy(b, a); //destino, fuente
	strrev(b);
	
	if(strcmp(a, b) == 0){
		cout<<"La palabara es palindroma!!"<<endl;
		cout<<a <<" y " <<b<<" se leen de la misma manera"<<endl;
	}
	else {
		cout<<"La palabra NO es palindroma!!!"<<endl;
		cout<<a <<" y " <<b<<" NO se leen de la misma manera"<<endl;
	 }
	
	return 0;
}
