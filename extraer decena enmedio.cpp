/*
En un programa C/C++ pida un numero de 3 cifras y extraiga el numero de enmedio
de ser necesario implemente funciones para validar que solo sea de 3 digitos en 
caso de que no sea de 3 cifras mandar mensaje de que no se pudo realizar operacion
*/
#include<iostream>
using namespace std;

bool validar(int num){
	int contador = 0;
	bool cifras = false;
	while(num > 0){
		num = num/10;
		contador ++;
	}
	
	if(contador == 3){
		cifras = true;
	}
	
	return cifras;
}

int main(){
	
	int numero, enmedio;
	
	cout<<"Vamos a extraer el numero de enmedio de tu numero: ";
	cin>>numero;
	if(validar(numero)){
	    enmedio = (numero/10)%10;
	    cout<<"Numero de en medio: "<<enmedio<<endl;
	}
	else{
		cout<<"No se pudo realizar la operacion"<<endl;
	}
}
