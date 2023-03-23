/*
 Crear un programa que pida al usuario 3 numeros, si estos van en manera consecutiva
 terminar el programa con el mensaje "Gracias" y terminar el programa sino es asi 
 seguir pidiendo 3 numeros
*/
#include<iostream>
using namespace std;

int main(){
	
	int a, b, c;
	bool bandera = true;
	
	while(bandera){
		                                
		cout<<"Ingresa num1: "; cin>>a;
		cout<<"Ingresa num2: "; cin>>b;
		cout<<"Ingresa num3: "; cin>>c;
		
		if(b== a+1 && c == b+1){
			cout<<"Numeros consecutivos"<<endl;
			cout<<"Gracias"<<endl;
			bandera = false;
			
		}	
	}
	return 0;
}
