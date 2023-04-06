/*
  realizar un programa en el cual sea ingresada una cantidad de segundos y por pantalla
  muestre la cantidad de horas, minutos y segundos
*/
#include<iostream>
using namespace std;

int main()
{
	int numero;
	cout<<"Escribe el tiempo en segundos: "; cin>>numero;
	
	int minutos = numero/60;
	
   cout<<minutos/60<<" hora"<<endl;
   cout<<minutos%60<<" minutos"<<endl;
   cout<<numero%60<< " segundos"<<endl;

  /*Explicacion del codigo:
 	Se tienen que hacer 2 divisiones consecutivas.
 	-1a division es segundos/60 el resto son los segundos y el cociente se vuelve a dividr
 	-2da division es el cociente/60 y el resto son los minutos 
  */
    return 0;
}