/*
 Escribir un programa en C/C++ utilizando programacion funcional que simule un juego de multiplicaciones con las
 siguientes caractersisticas, desplegar un menu con opciones al usuario
	1.Practicar
	2.Basico
	3.Intermedio
	4.Avanzado
	5.Salir
	
	practicar: el usuario elige que tabla de multiplicar desea 
	basico: al azar se elige una tabla del 1 al 5
	intermedio: al azar se elige una tabla del 6 al 10
	avanzando: al azar se va eligiendo la tabla y el operando
	
	al final de cada opcion se debe de retroalimentar imprimiendo cuantas respuestas
	estuvieron correctas e incorrectas
*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void practicar();
void basico();
void intermedio();
void avanzado();
void menu();

int correcto= 0, incorrecto= 0;

int main(){
	
	srand((unsigned)time(NULL));

    int opcion;
	
	do{
		menu();
		cout<<"Selecciona opcion: "; cin>>opcion;
		cout<<"---------------------------"<<endl;
		switch(opcion){
			case 1:
				practicar();
				break;
			case 2:
				basico();
				break;
			case 3:
				intermedio();
				break;
			case 4:
				avanzado();
			case 5:
				break;
			default:
				cout<<"Selecciona opcion valida"<<endl;
				cout<<"---------------------------"<<endl;
				break;
		}
		
		
	}while(opcion !=5);
	
}

void menu(){
	
	cout<<"+-- Selecciona una opcion --+"<<endl;
	cout<<"+ 1.. Practicar"<<endl;
	cout<<"+ 2.. Basico "<<endl;
	cout<<"+ 3.. Intermedio"<<endl;
	cout<<"+ 4.. Avanzado"<<endl;
	cout<<"+ 5.. S a l i r "<<endl;
	
}

void practicar(){
	
	int numero, respuesta;
	cout<<"Ingresa una tabla [1-10]: "; cin>>numero;
	if(numero >= 1 && numero<=10){
		
		for(int i = 1; i<=10; i++){
		cout<<numero<<" x "<<i<<" ="; cin>>respuesta;
		if(numero*i == respuesta){
			correcto++;
		}
		else{
			incorrecto++;
		}
		
	}
	
	cout<<"---------------------------"<<endl;
	cout<<"\nR E S U L T A D O S"<<endl;
	cout<<"Correctas: "<<correcto<<endl;
	cout<<"Incorrectas: "<<incorrecto<<endl;
	cout<<"---------------------------"<<endl;
	correcto = 0;
	incorrecto = 0;
	}
	else{
		cout<<"El rango debe de ser [1-10]"<<endl;
		practicar();
	
	}
}

void basico(){
	
	    int numero = rand()%5+1;
		int respuesta;
	    cout<<"Tabla selelccionada [1-5]: "<<numero<<endl;

		for(int i = 1; i<=10; i++){
		cout<<numero<<" x "<<i<<" ="; cin>>respuesta;
		if(numero*i == respuesta){
			correcto++;
		}
		else{
			incorrecto++;
		}
		
	   }
	
	cout<<"---------------------------"<<endl;
	cout<<"\nR E S U L T A D O S"<<endl;
	cout<<"Correctas: "<<correcto<<endl;
	cout<<"Incorrectas: "<<incorrecto<<endl;
	cout<<"---------------------------"<<endl;
	correcto = 0;
	incorrecto = 0;
	
	
}


void intermedio(){
		    int numero = rand()%6+10;
		int respuesta;
	    cout<<"Tabla selelccionada [6-10]: "<<numero<<endl;

		for(int i = 1; i<=10; i++){
		cout<<numero<<" x "<<i<<" ="; cin>>respuesta;
		if(numero*i == respuesta){
			correcto++;
		}
		else{
			incorrecto++;
		}
		
	   }
	
	cout<<"---------------------------"<<endl;
	cout<<"\nR E S U L T A D O S"<<endl;
	cout<<"Correctas: "<<correcto<<endl;
	cout<<"Incorrectas: "<<incorrecto<<endl;
	cout<<"---------------------------"<<endl;
	correcto = 0;
	incorrecto = 0;
	
	
}

void avanzado(){
	    
		int respuesta;

		for(int i = 1; i<=10; i++){
		   int numero = rand()%10+1;
	        int operando = rand()%10+1;
		    cout<<numero<<" x "<<operando<<" ="; cin>>respuesta;
		if(numero*operando == respuesta){
			correcto++;
		}
		else{
			incorrecto++;
		}
		
	   }
	
	cout<<"---------------------------"<<endl;
	cout<<"\nR E S U L T A D O S"<<endl;
	cout<<"Correctas: "<<correcto<<endl;
	cout<<"Incorrectas: "<<incorrecto<<endl;
	cout<<"---------------------------"<<endl;
	correcto = 0;
	incorrecto = 0;
	
}