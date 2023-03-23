#include<iostream>
using namespace std;

int multiplicar(int x, int y){
	int i = 0, resultado = 0;
	while(i < y){
		
		
		resultado += x;
		i++;
		
	}
	
	return resultado;
	
}


int main(){
	
	int a, b; 
	
	cout<<"Ingresa 1r num: "; cin>>a;
	cout<<"Ingresa 2do num: "; cin>>b;
	
	cout<<multiplicar(a,b);
	
	return 0;
}
