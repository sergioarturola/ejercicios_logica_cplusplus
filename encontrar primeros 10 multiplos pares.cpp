/*
  Realizar un programa que pida un numero por teclado y encuentre los 10 primeros multiplos los
  muestre por pantalla y los sume

*/
#include<iostream>
using namespace std;

int main(){
	
	long num, control= 1, i = 1, suma = num;
	
	cout<<"Digita un numero: "; cin>>num;
	
	while(control != 10){
		
		
		if((i%2 == 0) &&(i%num == 0)){

				cout<<i<<endl;
				suma = suma + i;
				control++;		
		}
		
		i++;
	}
	
	cout<<suma<<endl;
	
	cout<<"\nLa suma de los multiplos es: "<<suma<<endl;
	
}