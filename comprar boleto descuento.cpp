/*
 Sala de cine
 escribe un algortimo que simule la taquilla de una sala de cine que pida el dia de la semana en formato
 de numero donde lunes = 1 y domingo =7 validar que el numero solo se encuentre en ese rango, despues
 considerar las siguientes tarifas
 dias 1, 3, 4 tarifa = 8
 dia 2 tarifa = 6
 dia 5 ,6 ,7 tarifa = 10
 
 despues de obtener el dia preguntar la cantidad de boletos y si estos son mas de 4 aplicar un descuento
 del 5%, al final mostrar los datos en la pantalla 

*/

#include<iostream>
using namespace std;

void pelicula(int dia_semana);

int main(){
	
	int dia;
	bool bandera = true;

	//validando dia se la semana entre 1 y 7
	
	while(bandera){
	   cout<<"Ingresa dia de la semana: [1-7]: "; cin>>dia;
	   
	   if(dia >=1 && dia<=7){
	   	bandera = false;
	   }
	   else{
	   	cout<<"Ingresa un dia valido"<<endl;
	   }	
	}
	
	pelicula(dia);
	cout<<"Disfrute de la pelicula!!!"<<endl;
}
	
	//funcion
	void pelicula(int dia_semana){
		int tarifa = 0, boletos;
		double pagar, descuento;
		//estableciendo tarifa
		
		if(dia_semana == 1 || dia_semana== 3 || dia_semana == 4) tarifa = 8;
		if(dia_semana == 2) tarifa = 6;
		if(dia_semana== 5 || dia_semana == 6 || dia_semana == 7) tarifa = 10;
		
		cout<<"La tarifa es de: "<<tarifa<<" Digita la cantidad de boletos: ";
		cin>>boletos;
		pagar = tarifa*boletos;
		
		if(boletos > 4){
			descuento = pagar*0.05;
			cout<<"Subtotal: "<<pagar<<endl;
			cout<<"Descuento: "<<descuento<<endl;
			cout<<"Total: "<<pagar-descuento<<endl;
		}
		
		else{
			
			cout<<"Total a pagar: "<<pagar<<endl;
		}
		
	}
	