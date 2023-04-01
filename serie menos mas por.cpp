/*
  Realizar un programa en C/C++ que realice la siguiente serie
  
  Salilda en concola:   3   2   4   12   8   13   78   71   79
  operacion:           -1  +2  *3   -4   +5  *6   -7   +8   *9
  donde n = 9
*/

#include<iostream>
using namespace std;

int main(){
	
	int n = 9, resultado= 3, contador = 1 ;
	
	for(int i = 1; i<=n; i++){
		

		cout<<resultado<<" ";

		if(contador == 1) {
			resultado = resultado- i;
			contador++;
			continue;


		}
		if(contador == 2){
		     resultado =resultado+ i;
		     contador++;
		     continue;
	
		} 
		if(contador == 3){
			resultado = resultado* i;
			contador = 1;
			continue;
		}
		
		   

	}
	
}